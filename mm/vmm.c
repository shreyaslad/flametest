/*
                vmm.h
                Copyright Shreyas Lad (PenetratingShot) 2020

                Virtual Memory Manager
*/

#include <mm/vmm.h>

uint64_t* getPML4() {
  uint64_t* addr;
  asm volatile("movq %%cr3, %0;" : "=r"(addr));
  return (uint64_t*)addr;
}

void setPML4(uint64_t* PML4) {
  asm volatile("movq %0, %%cr3;" ::"r"(PML4) : "memory");
}

void invlpg(uint64_t* vaddr) {
  asm volatile("invlpg (%0);" ::"r"(vaddr) : "memory");
}

void tlbflush() { setPML4(getPML4()); }

// virtual address to offset
offset_t vtoof(uint64_t* vaddr) {
  uint64_t addr = (uint64_t)vaddr;

  offset_t offset = {
      .pml4off = (uint8_t)((addr & ((uint64_t)0x1ff << 39)) >> 39),
      .pml3off = (uint8_t)((addr & ((uint64_t)0x1ff << 39)) >> 39),
      .pml2off = (uint8_t)((addr & ((uint64_t)0x1ff << 39)) >> 39),
      .pml1off = (uint8_t)((addr & ((uint64_t)0x1ff << 39)) >> 39)};

  return offset;
}

// grabs the physical address from an existing virtual address in the page
// tables
uint64_t* getpaddr(void* vaddr) {
  offset_t offset = vtoof((uint64_t*)vaddr);

  uint64_t* pml4ptr = getPML4();
  uint64_t* pml3ptr = pml4ptr[offset.pml4off] & RMFLAGS;
  uint64_t* pml2ptr = pml3ptr[offset.pml3off] & RMFLAGS;

  return pml2ptr[offset.pml2off] & RMFLAGS;
}

// maps a virtual address to a physical address
// this only maps 1 page, need to do more :/
void vmap(uint64_t* vaddr, uint64_t* paddr, size_t pages) {
  offset_t offset = vtoof(vaddr);

  uint64_t* pml4ptr =
      getPML4(); // the pml4 is already created in the bootloader
  uint64_t* pml3ptr = NULL;
  uint64_t* pml2ptr = NULL;

  if ((pml4ptr[offset.pml4off] & TABLEPRESENT) == 1) {
    pml3ptr = (uint64_t*)(pml4ptr[offset.pml4off] & RMFLAGS);

    if ((pml3ptr[offset.pml3off] & TABLEPRESENT) == 1) {
      pml2ptr = (uint64_t*)(pml3ptr[offset.pml3off] & RMFLAGS);

      if ((pml2ptr[offset.pml2off] & TABLEPRESENT) == 1) {
        pml2ptr[offset.pml2off] =
            (uint64_t)paddr | TABLEPRESENT | TABLEWRITE | TABLEHUGE;

        sprint("Derived Addr1: ");
        sprint_uint(pml2ptr[offset.pml2off] & RMFLAGS);
        invlpg(vaddr);
      } else {
        pml2ptr[offset.pml2off] =
            (uint64_t)paddr | TABLEPRESENT | TABLEWRITE | TABLEHUGE;
        sprint("Derived Addr2: ");
        sprint_uint(pml2ptr[offset.pml2off] & RMFLAGS);
        invlpg(vaddr);
      }
    } else {
      pml2ptr = pmalloc(TABLESIZE);
      pml3ptr[offset.pml3off] = (uint64_t)pml2ptr | TABLEPRESENT | TABLEWRITE;

      pml2ptr[offset.pml2off] =
          (uint64_t)paddr | TABLEPRESENT | TABLEWRITE | TABLEHUGE;
      sprint("Derived Addr3: ");
      sprint_uint(pml2ptr[offset.pml2off] & RMFLAGS);
      invlpg(vaddr);
    }
  } else {
    pml3ptr = pmalloc(TABLESIZE);
    pml4ptr[offset.pml4off] = (uint64_t)pml3ptr | TABLEPRESENT | TABLEWRITE;

    pml2ptr = pmalloc(TABLESIZE);
    pml3ptr[offset.pml2off] = (uint64_t)pml2ptr | TABLEPRESENT | TABLEWRITE;

    pml2ptr[offset.pml2off] =
        (uint64_t)paddr | TABLEPRESENT | TABLEWRITE | TABLEHUGE;
    char buf[20];
    sprint("Derived Addr: ");
    htoa(pml2ptr[offset.pml2off] & RMFLAGS, buf);
    sprint(buf);

    memset(buf, 0, 20);
    sprint("\nEntry: ");
    htoa(pml2ptr[offset.pml2off], buf);
    sprint(buf);
    invlpg(vaddr);
  }

  UNUSED(pages);
}

void test() {
  char buf[20];
  sprint("reach1");
  offset_t offset = vtoof((uint64_t*)0x00000000FD000000);

  uint64_t* pml4ptr =
      getPML4(); // the pml4 is already created in the bootloader

  sprint("\nPml4Ptr: ");
  htoa((uint64_t)pml4ptr, buf);
  sprint(buf);
  memset(buf, 0, 20);

  sprint("\nPml4Offset: ");
  htoa(pml4ptr[offset.pml4off], buf);
  sprint(buf);
  memset(buf, 0, 20);

  uint64_t* pml3ptr = NULL;
  uint64_t* pml2ptr = NULL;

  sprint("\nreach2");

  pml3ptr = pmalloc(1);
  sprint("\nPml3Ptr: ");
  htoa((uint64_t)pml3ptr, buf);
  sprint(buf);
  memset(buf, 0, 20);
  pml4ptr[offset.pml4off] = (uint64_t)pml3ptr | TABLEPRESENT | TABLEWRITE;

  sprint("\nPml3Offset: ");
  htoa(pml3ptr[offset.pml3off], buf);
  sprint(buf);
  memset(buf, 0, 20);

  pml2ptr = pmalloc(1);
  sprint("\nPml2Ptr: ");
  htoa((uint64_t)pml3ptr, buf);
  sprint(buf);
  memset(buf, 0, 20);
  pml3ptr[offset.pml3off] = (uint64_t)pml2ptr | TABLEPRESENT | TABLEWRITE;

  sprint("\nPml2Offset: ");
  htoa(pml2ptr[offset.pml2off], buf);
  sprint(buf);
  memset(buf, 0, 20);

  sprint("\nreach4");

  pml2ptr[offset.pml2off] =
      (uint64_t)0x00000000FD000000 | TABLEPRESENT | TABLEWRITE | TABLEHUGE;

  sprint("\nreach5");
}

void vfree(uint64_t* vaddr, size_t pages) {
  offset_t offset = vtoof(vaddr);
  uint64_t* pml4ptr = getPML4();

  uint64_t* pml3ptr = (uint64_t*)(pml4ptr[offset.pml4off] & RMFLAGS);
  uint64_t* pml2ptr = (uint64_t*)(pml3ptr[offset.pml3off] & RMFLAGS);

  for (uint64_t i = offset.pml2off; i < pages + 1; i++) {
    pml2ptr[i] = 0; // TODO: free page table if necessary
  }

  tlbflush(vaddr);
}