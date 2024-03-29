#pragma once

#include "type.h"
#include <stdint.h>

/* Segment selectors */
#define KERNEL_CS 0x08
#define IDT_ENTRIES 256

/* How every interrupt gate (handler) is defined */
typedef struct {
  uint16_t low_offset; /* Lower 16 bits of handler function address */
  uint16_t sel;		   /* Kernel segment selector */
  uint8_t zero16;
  /* First byte
   * Bit 7: "Interrupt is present"
   * Bits 6-5: Privilege level of caller (0=kernel..3=user)
   * Bit 4: Set to 0 for interrupt gates
   * Bits 3-0: bits 1110 = decimal 14 = "32 bit interrupt gate" */
  uint8_t flags;
  uint16_t middle_offset; /* Middle 16 bits of handler function address */
  uint32_t high_offset;	  /* Higher 32 bits of handler function address */
  uint32_t zero32;
} __attribute__((packed)) idt_gate_t;

/* A pointer to the array of interrupt handlers. */
typedef struct {
  uint16_t limit;
  uint64_t base;
} __attribute__((packed)) idt_register_t;

idt_gate_t idt[IDT_ENTRIES];
idt_register_t idt_reg;

/* Functions implemented in idt.c */
void set_idt_gate(int n, uint64_t handler, uint8_t flags);
void set_idt();