/*
    colors.h
    Copyright Shreyas Lad (PenetratingShot) 2020

    VESA Colors
*/

#pragma once

#include <stdint.h>

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