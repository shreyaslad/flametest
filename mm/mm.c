/*
                mm.c
                Copyright Shreyas Lad (PenetratingShot) 2020

                Kernel Memory Manager
*/

#include <mm/mm.h>

/* Allocation / Deallocation */
void* malloc(size_t bytes) {
  size_t pages = bytes / PAGESIZE;

  uint64_t* ret = (uint64_t*)pmalloc(pages);
  vmap(ret + KNL_HIGH_VMA, ret, pages);
  ret += KNL_HIGH_VMA;

  return (void*)ret;
}

void free(void* vaddr) {
  vfree((uint64_t*)vaddr,
        PAGESIZE); // only frees 1 page leave me alone I'm lazy
  pmfree(getpaddr(vaddr), 1);
}