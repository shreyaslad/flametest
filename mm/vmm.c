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
  size_t aa = (size_t)vaddr;

  offset_t offset = {
      .pml4off = (aa & ((size_t)0x1ff << 39)) >> 39,
      .pml3off = (aa & ((size_t)0x1ff << 30)) >> 30,
      .pml2off = (aa & ((size_t)0x1ff << 21)) >> 21,
      .pml1off = (aa & ((size_t)0x1ff << 12)) >> 12,
  };

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
  offset_t offset = vtoof(addr);

  uint64_t* pml4ptr = (uint64_t*)((size_t)((size_t)getPML4() + HIGH_VMA));

  uint64_t pml3phys = 0x300000;
  uint64_t* pml3virt = (uint64_t*)0xFFFF800000300000;
  uint64_t pml2phys = 0x500000;
  uint64_t* pml2virt = (uint64_t*)0xFFFF800000500000;

  pml4ptr[offset.pml4off] = (uint64_t)pml3phys | TABLEPRESENT | TABLEWRITE;
  pml3virt[offset.pml3off] = (uint64_t)pml2phys | TABLEPRESENT | TABLEWRITE;

  pml2virt[offset.pml2off] =
      (uint32_t)addr | TABLEPRESENT | TABLEWRITE | TABLEHUGE;

  pml2virt[offset.pml2off + 1] =
      (uint32_t)addr | TABLEPRESENT | TABLEWRITE | TABLEHUGE;

  pml2virt[offset.pml2off + 2] =
      (uint32_t)addr | TABLEPRESENT | TABLEWRITE | TABLEHUGE;

  pml2virt[offset.pml2off + 3] =
      (uint32_t)addr | TABLEPRESENT | TABLEWRITE | TABLEHUGE;

  pml2virt[offset.pml2off + 4] =
      (uint32_t)addr | TABLEPRESENT | TABLEWRITE | TABLEHUGE;
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