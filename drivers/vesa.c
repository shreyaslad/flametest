/*
	vesa.c
	Copyright Shreyas Lad (PenetratingShot) 2020

	VESA Implementation
*/

#include <drivers/vesa.h>

fbargs_t args = {0, 0, 0, 0, 0};
uint32_t* addr = 0x00000000FD000000;

/*void setScreen() { ; }

void setPixel(uint64_t x, uint64_t y, uint32_t color) {
  size_t fb_i = x + (args.fbpitch / sizeof(uint32_t)) * y;
  addr[fb_i] = color;
}

void clearPixel(uint64_t x, uint64_t y) {
  size_t fb_i = x + (args.fbpitch / sizeof(uint32_t)) * y;
  addr[fb_i] = 0xFFFFFFFF;
  return;
}

void setLargePixel(uint64_t x, uint64_t y, uint32_t color) {
  for (uint64_t i = 0; i < 3; i++) {
	for (uint64_t j = 0; j < 3; j++) {
	  setPixel(x + i, y + j, color);
	}
  }
}

void putChar(char c, uint64_t x, uint64_t y, color_t fg, color_t bg) {
  int orig_x = x;
  uint8_t* glyph = bitmap_font[c * FONT_HEIGHT];

  for (int i = 0; i < FONT_HEIGHT; i++) {
	for (int j = FONT_WIDTH - 1; j >= 0; j--)
	  if (getBit(glyph[i], i) == 1) {
		setPixel(x++, y, createColor(fg));
	  } else {
		setPixel(x++, y, createColor(bg));
	  }
	y++;
	x = orig_x;
  }

  return;
}*/