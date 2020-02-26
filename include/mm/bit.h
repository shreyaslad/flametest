/*
    bit.c
    Copyright Shreyas Lad (PenetratingShot) 2020

    Set and Clear Bit Operations
*/

#pragma once

#include <stdint.h>
#include <stddef.h>

#define bit_test(var, offset) ({ \
    int __ret; \
    asm volatile ( \
        "bt %1, %2;" \
        : "=@ccc" (__ret) \
        : "r" ((uint32_t)(var)), "r" ((uint32_t)(offset)) \
    ); \
    __ret; \
})

uint8_t getBit(uint8_t num, uint8_t bit);
void setBit(uint8_t* num, uint8_t bit, uint8_t state);

uint8_t getAbsoluteBitState(uint64_t* bitmap, uint64_t bit);
void setAbsoluteBitState(uint64_t* bitmap, uint64_t bit);