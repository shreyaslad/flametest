/*
    colors.h
    Copyright Shreyas Lad (PenetratingShot) 2020

    VESA Colors
*/

#pragma once

#include <stdint.h>

#define WHITE_ON_BLACK 0x0f
#define RED_ON_WHITE 0xf4
#define BLUE_ON_BLACK 0x09
#define WHITE_ON_WHITE 0xff
#define CYAN_ON_CYAN 0x33
#define BLACK_ON_BLACK 0x00

enum vga_color {
    VGA_COLOR_BLACK = 0,
    VGA_COLOR_BLUE = 1,
    VGA_COLOR_GREEN = 2,
    VGA_COLOR_CYAN = 3,
    VGA_COLOR_RED = 4,
    VGA_COLOR_MAGENTA = 5,
    VGA_COLOR_BROWN = 6,
    VGA_COLOR_LIGHT_GREY = 7,
    VGA_COLOR_DARK_GREY = 8,
    VGA_COLOR_LIGHT_BLUE = 9,
    VGA_COLOR_LIGHT_GREEN = 10,
    VGA_COLOR_LIGHT_CYAN = 11,
    VGA_COLOR_LIGHT_RED = 12,
    VGA_COLOR_LIGHT_MAGENTA = 13,
    VGA_COLOR_LIGHT_BROWN = 14,
    VGA_COLOR_WHITE = 15,
};

uint8_t vga_entry_color(enum vga_color fg, enum vga_color bg);

/*
typedef struct {
  uint8_t red;
  uint8_t green;
  uint8_t blue;
} color_t;

typedef struct {
  uint8_t roffset;
  uint8_t goffset;
  uint8_t boffset;
} coffset_t; // color bitshift offset

coffset_t coffset;

color_t Black;
color_t Blue;
color_t Green;
color_t Cyan;
color_t Red;
color_t Magenta;
color_t Brown;
color_t LightGrey;
color_t DarkGrey;
color_t LightBlue;
color_t LightGreen;
color_t LightCyan;
color_t LightRed;
color_t LightMagenta;
color_t Yellow;
color_t White;

uint32_t createColor(color_t color);
color_t createColorT(uint8_t r, uint8_t g, uint8_t b);*/