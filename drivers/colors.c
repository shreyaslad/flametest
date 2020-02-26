/*
	colors.c
	Copyright Shreyas Lad (PenetratingShot) 2020

	Colors
*/

#include <drivers/colors.h>

uint8_t vga_entry_color(enum vga_color fg, enum vga_color bg) {
  return fg | (bg << 4);
}

/*
coffset_t colorOffset = {0, 0, 0};

color_t Black = {0, 0, 0};
color_t Blue = {59, 77, 245};
color_t Green = {24, 214, 43};
color_t Cyan = {20, 227, 193};
color_t Red = {235, 64, 52};
color_t Magenta = {232, 107, 220};
color_t Brown = {143, 93, 68};
color_t LightGrey = {56, 56, 56};
color_t DarkGrey = {43, 43, 43};
color_t LightBlue = {173, 153, 255};
color_t LightGreen = {20, 227, 127};
color_t LightCyan = {0, 180, 240};
color_t LightRed = {209, 88, 88};
color_t LightMagenta = {255, 112, 226};
color_t Yellow = {255, 253, 1533};
color_t White = {255, 255, 255};

uint32_t createColor(color_t color) {
  return color.red << coffset.roffset | color.green << coffset.goffset |
		 color.blue << coffset.boffset;
}

color_t createColorT(uint8_t r, uint8_t g, uint8_t b) {
  color_t color = {r, g, b};
  return color;
}*/
