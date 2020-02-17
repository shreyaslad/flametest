/*
    vesa.h
    Copyright Shreyas Lad (PenetratingShot) 2020

    VESA Implementation
*/

#pragma once

#include <stdint.h>
#include <stddef.h>
#include <drivers/colors.h>
#include <function.h>

typedef struct fbargs {
  uint64_t fbaddr;
  uint32_t fbpitch;
  uint32_t fbwidth;
  uint32_t fbheight;
  uint8_t fbbpp;
} fbargs_t;

// setup global MBD params
fbargs_t args;

void setScreen();
void setPixel(uint64_t x, uint64_t y, uint32_t color);
void clearPixel(uint64_t x, uint64_t y);