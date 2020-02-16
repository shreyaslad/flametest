#include "lvgl/lvgl.h"

/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef ROBOTO-LIGHT_16
#define ROBOTO-LIGHT_16 1
#endif

#if ROBOTO-LIGHT_16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */
    0x0,

    /* U+21 "!" */
    0xff, 0x10,

    /* U+22 "\"" */
    0xb6, 0x80,

    /* U+23 "#" */
    0x12, 0x12, 0x22, 0xff, 0x24, 0x24, 0x24, 0x24,
    0xff, 0x44, 0x48, 0x48,

    /* U+24 "$" */
    0x10, 0x71, 0x14, 0x18, 0x30, 0x10, 0x1c, 0xc,
    0x6, 0xc, 0x1c, 0x6f, 0x84, 0x8,

    /* U+25 "%" */
    0x70, 0x22, 0x8, 0x92, 0x28, 0x72, 0x1, 0x0,
    0x58, 0x29, 0x12, 0x44, 0x92, 0x24, 0x6,

    /* U+26 "&" */
    0x38, 0x22, 0x11, 0x8, 0x82, 0x81, 0x81, 0xc1,
    0x92, 0x85, 0x41, 0x31, 0x8f, 0x20,

    /* U+27 "'" */
    0xe0,

    /* U+28 "(" */
    0x12, 0x44, 0x88, 0x88, 0x88, 0x88, 0x44, 0x42,
    0x10,

    /* U+29 ")" */
    0x84, 0x22, 0x21, 0x11, 0x11, 0x11, 0x22, 0x44,
    0x80,

    /* U+2A "*" */
    0x10, 0x23, 0x59, 0xc2, 0x85, 0x10, 0x0,

    /* U+2B "+" */
    0x10, 0x20, 0x47, 0xf1, 0x2, 0x4, 0x8,

    /* U+2C "," */
    0x54,

    /* U+2D "-" */
    0xf0,

    /* U+2E "." */
    0x80,

    /* U+2F "/" */
    0x4, 0x20, 0x82, 0x10, 0x42, 0x8, 0x21, 0x4,
    0x10, 0x80,

    /* U+30 "0" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x83,
    0x5, 0x11, 0xc0,

    /* U+31 "1" */
    0x1f, 0x11, 0x11, 0x11, 0x11, 0x11,

    /* U+32 "2" */
    0x3c, 0x46, 0x82, 0x82, 0x2, 0x4, 0x8, 0x18,
    0x10, 0x20, 0x40, 0xff,

    /* U+33 "3" */
    0x3d, 0x8e, 0x8, 0x10, 0x47, 0x1, 0x1, 0x83,
    0x5, 0x11, 0xc0,

    /* U+34 "4" */
    0x2, 0x3, 0x2, 0x81, 0x41, 0x21, 0x10, 0x88,
    0x84, 0xff, 0x81, 0x0, 0x80, 0x40,

    /* U+35 "5" */
    0x7e, 0x81, 0x2, 0xb, 0x98, 0x80, 0x81, 0x3,
    0x5, 0x11, 0xc0,

    /* U+36 "6" */
    0x18, 0x41, 0x4, 0xb, 0x98, 0xa0, 0xc1, 0x83,
    0x5, 0x11, 0xc0,

    /* U+37 "7" */
    0xfe, 0x4, 0x10, 0x20, 0x81, 0x2, 0x8, 0x10,
    0x40, 0x82, 0x0,

    /* U+38 "8" */
    0x7d, 0x8e, 0xc, 0x14, 0x47, 0x11, 0x41, 0x83,
    0x7, 0x1b, 0xc0,

    /* U+39 "9" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x51, 0x9d, 0x2,
    0x8, 0x31, 0x80,

    /* U+3A ":" */
    0x80, 0x80,

    /* U+3B ";" */
    0x40, 0x1, 0x50,

    /* U+3C "<" */
    0x2, 0x18, 0xc6, 0x6, 0x3, 0x1, 0x80,

    /* U+3D "=" */
    0xfe, 0x0, 0x7, 0xf0,

    /* U+3E ">" */
    0x80, 0xc0, 0x60, 0x30, 0x8e, 0x20, 0x0,

    /* U+3F "?" */
    0x7b, 0x38, 0x41, 0x4, 0x21, 0x8, 0x20, 0x0,
    0x8,

    /* U+40 "@" */
    0xf, 0x80, 0x83, 0x8, 0x4, 0x86, 0x2c, 0x48,
    0xc4, 0x46, 0x22, 0x32, 0x11, 0x90, 0x8c, 0x84,
    0x62, 0x64, 0x9c, 0xc6, 0x0, 0x18, 0x0, 0x7c,
    0x0,

    /* U+41 "A" */
    0xc, 0x3, 0x0, 0xc0, 0x48, 0x12, 0x4, 0x82,
    0x10, 0x84, 0x7f, 0x90, 0x24, 0xa, 0x1,

    /* U+42 "B" */
    0xfc, 0x86, 0x82, 0x82, 0x86, 0xf8, 0x86, 0x81,
    0x81, 0x81, 0x82, 0xfc,

    /* U+43 "C" */
    0x3c, 0x31, 0x90, 0x50, 0x28, 0x4, 0x2, 0x1,
    0x0, 0x81, 0x20, 0x98, 0xc7, 0x80,

    /* U+44 "D" */
    0xf8, 0x86, 0x82, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x82, 0x86, 0xf8,

    /* U+45 "E" */
    0xff, 0x2, 0x4, 0x8, 0x1f, 0xa0, 0x40, 0x81,
    0x2, 0x7, 0xf0,

    /* U+46 "F" */
    0xff, 0x2, 0x4, 0x8, 0x10, 0x3f, 0x40, 0x81,
    0x2, 0x4, 0x0,

    /* U+47 "G" */
    0x3e, 0x30, 0x90, 0x30, 0x8, 0x4, 0x2, 0x1f,
    0x1, 0x80, 0xa0, 0x58, 0x63, 0xc0,

    /* U+48 "H" */
    0x81, 0x81, 0x81, 0x81, 0x81, 0xff, 0x81, 0x81,
    0x81, 0x81, 0x81, 0x81,

    /* U+49 "I" */
    0xff, 0xf0,

    /* U+4A "J" */
    0x2, 0x4, 0x8, 0x10, 0x20, 0x40, 0x81, 0x83,
    0x7, 0x13, 0xc0,

    /* U+4B "K" */
    0x83, 0x86, 0x84, 0x88, 0x90, 0xa0, 0xd0, 0x88,
    0x84, 0x84, 0x82, 0x81,

    /* U+4C "L" */
    0x81, 0x2, 0x4, 0x8, 0x10, 0x20, 0x40, 0x81,
    0x2, 0x7, 0xf0,

    /* U+4D "M" */
    0xc0, 0x78, 0xf, 0x1, 0xd0, 0x5a, 0xb, 0x22,
    0x64, 0x4c, 0x89, 0x8a, 0x31, 0x46, 0x30, 0xc2,
    0x10,

    /* U+4E "N" */
    0x81, 0xc1, 0xc1, 0xa1, 0x91, 0x91, 0x89, 0x89,
    0x85, 0x83, 0x83, 0x81,

    /* U+4F "O" */
    0x3e, 0x31, 0x90, 0x50, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x80, 0xa0, 0x98, 0xc7, 0xc0,

    /* U+50 "P" */
    0xfc, 0x82, 0x81, 0x81, 0x81, 0x82, 0xfc, 0x80,
    0x80, 0x80, 0x80, 0x80,

    /* U+51 "Q" */
    0x3e, 0x31, 0x90, 0x50, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x80, 0xa0, 0x98, 0xc7, 0xc0, 0x10, 0x4,

    /* U+52 "R" */
    0xfc, 0x82, 0x81, 0x81, 0x81, 0x82, 0xfc, 0x84,
    0x86, 0x82, 0x81, 0x81,

    /* U+53 "S" */
    0x3c, 0xc2, 0x81, 0x81, 0xc0, 0x30, 0xe, 0x3,
    0x81, 0x81, 0x43, 0x3c,

    /* U+54 "T" */
    0xff, 0x84, 0x2, 0x1, 0x0, 0x80, 0x40, 0x20,
    0x10, 0x8, 0x4, 0x2, 0x1, 0x0,

    /* U+55 "U" */
    0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x81, 0x42, 0x3c,

    /* U+56 "V" */
    0x80, 0x90, 0x24, 0x9, 0x4, 0x21, 0x8, 0x41,
    0x20, 0x48, 0x12, 0x3, 0x0, 0xc0, 0x30,

    /* U+57 "W" */
    0x41, 0x5, 0xc, 0x14, 0x30, 0x90, 0xa2, 0x24,
    0x88, 0x92, 0x22, 0x49, 0x9, 0x14, 0x28, 0x50,
    0x61, 0x41, 0x86, 0x4, 0x8,

    /* U+58 "X" */
    0x40, 0x90, 0x88, 0x42, 0x41, 0xc0, 0x60, 0x30,
    0x28, 0x12, 0x10, 0x98, 0x48, 0x10,

    /* U+59 "Y" */
    0x80, 0xa0, 0x90, 0x44, 0x42, 0x20, 0xa0, 0x70,
    0x10, 0x8, 0x4, 0x2, 0x1, 0x0,

    /* U+5A "Z" */
    0xff, 0x3, 0x2, 0x4, 0xc, 0x8, 0x10, 0x30,
    0x20, 0x40, 0xc0, 0xff,

    /* U+5B "[" */
    0xf2, 0x49, 0x24, 0x92, 0x49, 0x27,

    /* U+5C "\\" */
    0x81, 0x4, 0x8, 0x20, 0x81, 0x4, 0x10, 0x20,
    0x81, 0x4,

    /* U+5D "]" */
    0xe4, 0x92, 0x49, 0x24, 0x92, 0x4f,

    /* U+5E "^" */
    0x23, 0x15, 0x29, 0x44,

    /* U+5F "_" */
    0xfe,

    /* U+60 "`" */
    0x94,

    /* U+61 "a" */
    0x3d, 0x8e, 0x8, 0x13, 0xf8, 0x60, 0xc3, 0x7a,

    /* U+62 "b" */
    0x81, 0x2, 0x5, 0xcc, 0x50, 0x60, 0xc1, 0x83,
    0x7, 0x15, 0xc0,

    /* U+63 "c" */
    0x3c, 0x8e, 0xc, 0x8, 0x10, 0x20, 0xa3, 0x3c,

    /* U+64 "d" */
    0x2, 0x4, 0x9, 0xd4, 0x70, 0x60, 0xc1, 0x83,
    0x5, 0x19, 0xd0,

    /* U+65 "e" */
    0x38, 0x8a, 0xc, 0x1f, 0xf0, 0x20, 0x21, 0x3c,

    /* U+66 "f" */
    0x3a, 0x10, 0x8f, 0x21, 0x8, 0x42, 0x10, 0x84,
    0x0,

    /* U+67 "g" */
    0x3a, 0x8e, 0xc, 0x18, 0x30, 0x60, 0xa3, 0x3a,
    0x5, 0x11, 0xc0,

    /* U+68 "h" */
    0x82, 0x8, 0x2e, 0xce, 0x18, 0x61, 0x86, 0x18,
    0x61,

    /* U+69 "i" */
    0x9f, 0xf0,

    /* U+6A "j" */
    0x20, 0x12, 0x49, 0x24, 0x92, 0x70,

    /* U+6B "k" */
    0x81, 0x2, 0x4, 0x28, 0x92, 0x28, 0x70, 0x91,
    0x12, 0x24, 0x20,

    /* U+6C "l" */
    0xff, 0xf0,

    /* U+6D "m" */
    0xb9, 0xd9, 0xce, 0x10, 0xc2, 0x18, 0x43, 0x8,
    0x61, 0xc, 0x21, 0x84, 0x20,

    /* U+6E "n" */
    0xbb, 0x38, 0x61, 0x86, 0x18, 0x61, 0x84,

    /* U+6F "o" */
    0x3c, 0x42, 0x81, 0x81, 0x81, 0x81, 0x81, 0x42,
    0x3c,

    /* U+70 "p" */
    0xb9, 0x8a, 0xc, 0x18, 0x30, 0x60, 0xe2, 0xb9,
    0x2, 0x4, 0x0,

    /* U+71 "q" */
    0x3a, 0x8e, 0xc, 0x18, 0x30, 0x60, 0xa3, 0x3a,
    0x4, 0x8, 0x10,

    /* U+72 "r" */
    0xbc, 0x88, 0x88, 0x88, 0x80,

    /* U+73 "s" */
    0x7a, 0x38, 0x70, 0x30, 0x38, 0x71, 0x78,

    /* U+74 "t" */
    0x21, 0x9, 0xf2, 0x10, 0x84, 0x21, 0x8, 0x30,

    /* U+75 "u" */
    0x86, 0x18, 0x61, 0x86, 0x18, 0x73, 0x74,

    /* U+76 "v" */
    0x82, 0x85, 0xa, 0x22, 0x45, 0x6, 0xc, 0x10,

    /* U+77 "w" */
    0x46, 0x24, 0x62, 0x46, 0x24, 0xa2, 0x29, 0x42,
    0x94, 0x29, 0x41, 0x8, 0x10, 0x80,

    /* U+78 "x" */
    0x42, 0xc8, 0x90, 0xc1, 0x3, 0x9, 0x22, 0x42,

    /* U+79 "y" */
    0x82, 0x85, 0x11, 0x22, 0x45, 0x6, 0xc, 0x10,
    0x20, 0xc3, 0x0,

    /* U+7A "z" */
    0xfe, 0x8, 0x20, 0xc1, 0x4, 0x10, 0x60, 0xfe,

    /* U+7B "{" */
    0x8, 0x88, 0x42, 0x10, 0x8c, 0xc3, 0x8, 0x42,
    0x10, 0x82, 0x8,

    /* U+7C "|" */
    0xff, 0xfc,

    /* U+7D "}" */
    0x82, 0x8, 0x42, 0x10, 0x86, 0x9, 0x88, 0x42,
    0x10, 0x88, 0x80,

    /* U+7E "~" */
    0x70, 0xc4, 0x61, 0xc0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 62, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 58, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 74, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 5, .adv_w = 149, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 17, .adv_w = 142, .box_w = 7, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 31, .adv_w = 189, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 46, .adv_w = 158, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 60, .adv_w = 44, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 61, .adv_w = 82, .box_w = 4, .box_h = 17, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 70, .adv_w = 83, .box_w = 4, .box_h = 17, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 79, .adv_w = 109, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 86, .adv_w = 145, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 93, .adv_w = 49, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 94, .adv_w = 73, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 95, .adv_w = 61, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 96, .adv_w = 102, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 106, .adv_w = 142, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 142, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 123, .adv_w = 142, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 135, .adv_w = 142, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 146, .adv_w = 142, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 160, .adv_w = 142, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 142, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 182, .adv_w = 142, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 193, .adv_w = 142, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 204, .adv_w = 142, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 215, .adv_w = 54, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 50, .box_w = 2, .box_h = 11, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 220, .adv_w = 131, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 227, .adv_w = 142, .box_w = 7, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 231, .adv_w = 133, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 238, .adv_w = 116, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 247, .adv_w = 234, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 272, .adv_w = 160, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 287, .adv_w = 157, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 299, .adv_w = 166, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 313, .adv_w = 168, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 325, .adv_w = 146, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 336, .adv_w = 144, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 175, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 361, .adv_w = 181, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 373, .adv_w = 68, .box_w = 1, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 375, .adv_w = 141, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 386, .adv_w = 162, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 398, .adv_w = 135, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 409, .adv_w = 222, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 426, .adv_w = 182, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 438, .adv_w = 173, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 452, .adv_w = 158, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 464, .adv_w = 173, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 480, .adv_w = 163, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 492, .adv_w = 152, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 504, .adv_w = 153, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 518, .adv_w = 168, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 530, .adv_w = 158, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 545, .adv_w = 230, .box_w = 14, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 566, .adv_w = 157, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 580, .adv_w = 153, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 594, .adv_w = 153, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 606, .adv_w = 61, .box_w = 3, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 612, .adv_w = 101, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 622, .adv_w = 61, .box_w = 3, .box_h = 16, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 628, .adv_w = 107, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 632, .adv_w = 111, .box_w = 7, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 633, .adv_w = 73, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 634, .adv_w = 137, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 642, .adv_w = 142, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 653, .adv_w = 132, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 661, .adv_w = 142, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 672, .adv_w = 132, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 680, .adv_w = 85, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 689, .adv_w = 142, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 700, .adv_w = 141, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 709, .adv_w = 57, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 711, .adv_w = 58, .box_w = 3, .box_h = 15, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 717, .adv_w = 125, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 728, .adv_w = 57, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 730, .adv_w = 227, .box_w = 11, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 743, .adv_w = 141, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 750, .adv_w = 143, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 759, .adv_w = 142, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 770, .adv_w = 143, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 781, .adv_w = 86, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 786, .adv_w = 130, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 793, .adv_w = 82, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 801, .adv_w = 141, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 808, .adv_w = 123, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 816, .adv_w = 193, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 830, .adv_w = 125, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 838, .adv_w = 122, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 849, .adv_w = 125, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 857, .adv_w = 85, .box_w = 5, .box_h = 17, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 868, .adv_w = 57, .box_w = 1, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 870, .adv_w = 85, .box_w = 5, .box_h = 17, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 881, .adv_w = 175, .box_w = 9, .box_h = 3, .ofs_x = 1, .ofs_y = 3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    1, 53,
    3, 3,
    3, 8,
    3, 34,
    3, 66,
    3, 68,
    3, 69,
    3, 70,
    3, 72,
    3, 78,
    3, 79,
    3, 80,
    3, 81,
    3, 82,
    3, 84,
    3, 88,
    8, 3,
    8, 8,
    8, 34,
    8, 66,
    8, 68,
    8, 69,
    8, 70,
    8, 72,
    8, 78,
    8, 79,
    8, 80,
    8, 81,
    8, 82,
    8, 84,
    8, 88,
    9, 55,
    9, 56,
    9, 58,
    13, 3,
    13, 8,
    15, 3,
    15, 8,
    16, 16,
    34, 3,
    34, 8,
    34, 32,
    34, 36,
    34, 40,
    34, 48,
    34, 50,
    34, 53,
    34, 54,
    34, 55,
    34, 56,
    34, 58,
    34, 80,
    34, 85,
    34, 86,
    34, 87,
    34, 88,
    34, 90,
    34, 91,
    35, 53,
    35, 55,
    35, 58,
    36, 10,
    36, 53,
    36, 62,
    36, 94,
    37, 13,
    37, 15,
    37, 34,
    37, 53,
    37, 55,
    37, 57,
    37, 58,
    37, 59,
    38, 53,
    38, 68,
    38, 69,
    38, 70,
    38, 71,
    38, 72,
    38, 80,
    38, 82,
    38, 86,
    38, 87,
    38, 88,
    38, 90,
    39, 13,
    39, 15,
    39, 34,
    39, 43,
    39, 53,
    39, 66,
    39, 68,
    39, 69,
    39, 70,
    39, 72,
    39, 80,
    39, 82,
    39, 83,
    39, 86,
    39, 87,
    39, 90,
    41, 34,
    41, 53,
    41, 57,
    41, 58,
    42, 34,
    42, 53,
    42, 57,
    42, 58,
    43, 34,
    44, 14,
    44, 36,
    44, 40,
    44, 48,
    44, 50,
    44, 68,
    44, 69,
    44, 70,
    44, 72,
    44, 78,
    44, 79,
    44, 80,
    44, 81,
    44, 82,
    44, 86,
    44, 87,
    44, 88,
    44, 90,
    45, 3,
    45, 8,
    45, 34,
    45, 36,
    45, 40,
    45, 48,
    45, 50,
    45, 53,
    45, 54,
    45, 55,
    45, 56,
    45, 58,
    45, 86,
    45, 87,
    45, 88,
    45, 90,
    46, 34,
    46, 53,
    46, 57,
    46, 58,
    47, 34,
    47, 53,
    47, 57,
    47, 58,
    48, 13,
    48, 15,
    48, 34,
    48, 53,
    48, 55,
    48, 57,
    48, 58,
    48, 59,
    49, 13,
    49, 15,
    49, 34,
    49, 43,
    49, 57,
    49, 59,
    49, 66,
    49, 68,
    49, 69,
    49, 70,
    49, 72,
    49, 80,
    49, 82,
    49, 85,
    49, 87,
    49, 90,
    50, 53,
    50, 55,
    50, 56,
    50, 58,
    51, 53,
    51, 55,
    51, 58,
    53, 1,
    53, 13,
    53, 14,
    53, 15,
    53, 34,
    53, 36,
    53, 40,
    53, 43,
    53, 48,
    53, 50,
    53, 52,
    53, 53,
    53, 55,
    53, 56,
    53, 58,
    53, 66,
    53, 68,
    53, 69,
    53, 70,
    53, 72,
    53, 78,
    53, 79,
    53, 80,
    53, 81,
    53, 82,
    53, 83,
    53, 84,
    53, 86,
    53, 87,
    53, 88,
    53, 89,
    53, 90,
    53, 91,
    54, 34,
    55, 10,
    55, 13,
    55, 14,
    55, 15,
    55, 34,
    55, 36,
    55, 40,
    55, 48,
    55, 50,
    55, 62,
    55, 66,
    55, 68,
    55, 69,
    55, 70,
    55, 72,
    55, 80,
    55, 82,
    55, 83,
    55, 86,
    55, 87,
    55, 90,
    55, 94,
    56, 10,
    56, 13,
    56, 14,
    56, 15,
    56, 34,
    56, 53,
    56, 62,
    56, 66,
    56, 68,
    56, 69,
    56, 70,
    56, 72,
    56, 80,
    56, 82,
    56, 83,
    56, 86,
    56, 94,
    57, 14,
    57, 36,
    57, 40,
    57, 48,
    57, 50,
    57, 55,
    57, 68,
    57, 69,
    57, 70,
    57, 72,
    57, 80,
    57, 82,
    57, 86,
    57, 87,
    57, 90,
    58, 7,
    58, 10,
    58, 11,
    58, 13,
    58, 14,
    58, 15,
    58, 34,
    58, 36,
    58, 40,
    58, 43,
    58, 48,
    58, 50,
    58, 52,
    58, 53,
    58, 54,
    58, 55,
    58, 56,
    58, 57,
    58, 58,
    58, 62,
    58, 66,
    58, 68,
    58, 69,
    58, 70,
    58, 71,
    58, 72,
    58, 78,
    58, 79,
    58, 80,
    58, 81,
    58, 82,
    58, 83,
    58, 84,
    58, 85,
    58, 86,
    58, 87,
    58, 89,
    58, 90,
    58, 91,
    58, 94,
    59, 34,
    59, 36,
    59, 40,
    59, 48,
    59, 50,
    59, 68,
    59, 69,
    59, 70,
    59, 72,
    59, 80,
    59, 82,
    59, 86,
    59, 87,
    59, 88,
    59, 90,
    60, 43,
    60, 54,
    66, 3,
    66, 8,
    66, 87,
    66, 90,
    67, 3,
    67, 8,
    67, 87,
    67, 89,
    67, 90,
    67, 91,
    68, 3,
    68, 8,
    70, 3,
    70, 8,
    70, 87,
    70, 90,
    71, 3,
    71, 8,
    71, 10,
    71, 62,
    71, 68,
    71, 69,
    71, 70,
    71, 72,
    71, 82,
    71, 94,
    73, 3,
    73, 8,
    76, 68,
    76, 69,
    76, 70,
    76, 72,
    76, 82,
    78, 3,
    78, 8,
    79, 3,
    79, 8,
    80, 3,
    80, 8,
    80, 87,
    80, 89,
    80, 90,
    80, 91,
    81, 3,
    81, 8,
    81, 87,
    81, 89,
    81, 90,
    81, 91,
    83, 3,
    83, 8,
    83, 13,
    83, 15,
    83, 66,
    83, 68,
    83, 69,
    83, 70,
    83, 71,
    83, 72,
    83, 80,
    83, 82,
    83, 85,
    83, 87,
    83, 88,
    83, 90,
    85, 80,
    87, 3,
    87, 8,
    87, 13,
    87, 15,
    87, 66,
    87, 68,
    87, 69,
    87, 70,
    87, 71,
    87, 72,
    87, 80,
    87, 82,
    88, 13,
    88, 15,
    89, 68,
    89, 69,
    89, 70,
    89, 72,
    89, 80,
    89, 82,
    90, 3,
    90, 8,
    90, 13,
    90, 15,
    90, 66,
    90, 68,
    90, 69,
    90, 70,
    90, 71,
    90, 72,
    90, 80,
    90, 82,
    91, 68,
    91, 69,
    91, 70,
    91, 72,
    91, 80,
    91, 82,
    92, 43,
    92, 54
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -5, -13, -13, -15, -6, -7, -7, -7,
    -7, -2, -2, -8, -2, -7, -10, 1,
    -13, -13, -15, -6, -7, -7, -7, -7,
    -2, -2, -8, -2, -7, -10, 1, 3,
    2, 3, -21, -21, -21, -21, -28, -15,
    -15, -8, -1, -1, -1, -1, -16, -2,
    -11, -9, -12, -1, -2, -1, -6, -4,
    -6, 2, -3, -3, -7, -3, -4, -1,
    -2, -13, -13, -3, -3, -3, -3, -5,
    -3, 3, -2, -2, -2, -2, -2, -2,
    -2, -2, -3, -3, -3, -29, -29, -21,
    -33, 3, -4, -3, -3, -3, -3, -3,
    -3, -3, -3, -3, -3, 2, -4, 2,
    -3, 2, -4, 2, -3, -3, -8, -4,
    -4, -4, -4, -3, -3, -3, -3, -3,
    -3, -3, -3, -3, -3, -5, -8, -5,
    -42, -42, 2, -8, -8, -8, -8, -34,
    -7, -22, -18, -30, -5, -17, -11, -17,
    2, -4, 2, -3, 2, -4, 2, -3,
    -13, -13, -3, -3, -3, -3, -5, -3,
    -40, -40, -17, -25, -4, -3, -1, -2,
    -2, -2, -2, -2, -2, 2, 2, 2,
    -5, -3, -2, -4, -10, -2, -6, -5,
    -27, -29, -27, -10, -3, -3, -30, -3,
    -3, -2, 2, 2, 2, 2, -14, -12,
    -12, -12, -12, -14, -14, -12, -14, -12,
    -9, -14, -12, -9, -7, -10, -9, -7,
    -3, 3, -28, -5, -28, -9, -2, -2,
    -2, -2, 2, -6, -5, -5, -5, -5,
    -6, -5, -4, -3, -1, -1, 2, 2,
    -15, -7, -15, -5, 2, 2, -4, -4,
    -4, -4, -4, -4, -4, -3, -2, 2,
    -6, -3, -3, -3, -3, 2, -3, -3,
    -3, -3, -3, -3, -3, -4, -4, -4,
    3, -6, -26, -6, -26, -12, -4, -4,
    -12, -4, -4, -2, 2, -12, 2, 2,
    2, 2, 2, -9, -8, -8, -8, -3,
    -8, -5, -5, -8, -5, -8, -5, -7,
    -3, -5, -2, -3, -2, -4, 2, 2,
    -3, -3, -3, -3, -3, -3, -3, -3,
    -3, -3, -2, -3, -3, -3, -2, -2,
    -8, -8, -2, -2, -4, -4, -1, -2,
    -1, -2, -1, -1, -2, -2, -2, -2,
    2, 2, 3, 2, -3, -3, -3, -3,
    -3, 2, -13, -13, -2, -2, -2, -2,
    -2, -13, -13, -13, -13, -17, -17, -2,
    -3, -2, -2, -4, -4, -1, -2, -1,
    -2, 2, 2, -15, -15, -5, -2, -2,
    -2, 2, -2, -2, -2, 6, 2, 2,
    2, -2, 2, 2, -13, -13, -2, -2,
    -2, -2, 2, -2, -2, -2, -15, -15,
    -2, -2, -2, -2, -2, -2, 2, 2,
    -13, -13, -2, -2, -2, -2, 2, -2,
    -2, -2, -2, -2, -2, -2, -2, -2,
    -2, -2
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 434,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t roboto-light_16 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if ROBOTO-LIGHT_16*/

