#pragma once

#include <stdint.h>
#include <stdarg.h>
#include <string.h>
#include <mm/mm.h>
#include <drivers/colors.h>
#include <drivers/time.h>
#include <drivers/serial.h>
#include <drivers/keyboard.h>
#include <drivers/vesa.h>
#include <fs/hdd.h>
#include <fs/hddw.h>
#include "../../cpu/type.h"
#include "../../cpu/ports.h"

// Screen Dimensions
#define MAX_ROWS 500
#define MAX_COLS 1000

typedef struct {
  uint64_t x;
  uint64_t y;
} cursorpos_t;

/* Public kernel API */
void clear(color_t color);
void kprint(char *message);
void printf(char* message, ...);
void kprint_int(uint64_t num);
void kprint_uint8(uint8_t num);

void kprint_backspace();
void shiftCursorPos(int bruh, int bruh2);