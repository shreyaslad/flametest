/*
    font.h
    Copyright Shreyas Lad (PenetratingShot) 2020

    Font Bitmap
*/

#pragma once

#include <stdint.h>

#define FONT_WIDTH 8
#define FONT_HEIGHT 16
#define FONT_GLYPHS 256
#define FONT_MAX (FONT_HEIGHT * FONT_GLYPHS)

extern uint8_t bitmap_font[FONT_MAX];