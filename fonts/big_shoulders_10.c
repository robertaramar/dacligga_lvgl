/*******************************************************************************
 * Size: 10 px
 * Bpp: 1
 * Opts: --bpp 1 --size 10 --no-compress --lcd --stride 1 --align 1 --font BigShoulders-Bold.ttf --range 32-127 --format lvgl -o big_shoulders_10.c
 ******************************************************************************/

#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif



#ifndef BIG_SHOULDERS_10
#define BIG_SHOULDERS_10 1
#endif

#if BIG_SHOULDERS_10

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x7, 0x80, 0x78, 0x7, 0x80, 0x70, 0x7, 0x0,
    0x70, 0x0, 0x0, 0xf8,

    /* U+0022 "\"" */
    0x79, 0xc7, 0x1c, 0x0, 0x0,

    /* U+0023 "#" */
    0x0, 0x1e, 0x3c, 0x0, 0x7, 0x8f, 0x0, 0xf,
    0xff, 0xf8, 0x0, 0x3c, 0xf0, 0x0, 0xf, 0x1e,
    0x0, 0x1f, 0xff, 0xf0, 0x0, 0xf9, 0xf0, 0x0,
    0x1e, 0x3c, 0x0,

    /* U+0024 "$" */
    0x7, 0x80, 0x3f, 0xc1, 0xe1, 0xe3, 0xc3, 0xc3,
    0xf0, 0x0, 0xfe, 0x1e, 0x1e, 0x3c, 0x3c, 0x1f,
    0xf0, 0xf, 0x0,

    /* U+0025 "%" */
    0x3f, 0x3, 0x83, 0x9c, 0x30, 0x1c, 0xe7, 0x0,
    0x7f, 0xe0, 0x0, 0xf, 0xf8, 0x1, 0xcc, 0xe0,
    0x38, 0x67, 0x3, 0x3, 0xf0,

    /* U+0026 "&" */
    0xf, 0xe0, 0xf, 0x1c, 0x1, 0xef, 0x0, 0x7f,
    0x0, 0x3f, 0xfc, 0x1e, 0x3f, 0x3, 0xc7, 0xe0,
    0x7f, 0xf8,

    /* U+0027 "'" */
    0x79, 0xe0, 0x0,

    /* U+0028 "(" */
    0x1, 0xc0, 0x3c, 0x7, 0x80, 0xf0, 0xf, 0x0,
    0xf0, 0xf, 0x0, 0x78, 0x3, 0x80, 0x1c,

    /* U+0029 ")" */
    0xe, 0x0, 0x78, 0x3, 0xc0, 0x3c, 0x3, 0xc0,
    0x3c, 0x3, 0xc0, 0x38, 0x7, 0x80, 0xe0,

    /* U+002A "*" */
    0x7, 0x80, 0x78, 0x0, 0x0,

    /* U+002B "+" */
    0x3, 0x80, 0x0, 0xe0, 0x3, 0xff, 0xc0, 0xe,
    0x0, 0x0, 0x0, 0x0,

    /* U+002C "," */
    0x0, 0x3e, 0x6, 0x0, 0x0,

    /* U+002D "-" */
    0xf, 0xfe, 0x0, 0x0, 0x0,

    /* U+002E "." */
    0x0, 0x0, 0xf8,

    /* U+002F "/" */
    0x0, 0x3c, 0x0, 0x1e, 0x0, 0x7, 0x80, 0x3,
    0xc0, 0x1, 0xe0, 0x0, 0x78, 0x0, 0x3c, 0x0,
    0xe, 0x0, 0x7, 0x80, 0x3, 0xc0, 0x0,

    /* U+0030 "0" */
    0x1f, 0xe0, 0x78, 0xf1, 0xe1, 0xe3, 0xc3, 0xc7,
    0x87, 0x8f, 0xf, 0xf, 0x1e, 0xf, 0xf0,

    /* U+0031 "1" */
    0x7, 0xc0, 0x7c, 0x3, 0xc0, 0x3c, 0x3, 0xc0,
    0x3c, 0x3, 0xc0, 0x3c,

    /* U+0032 "2" */
    0x1f, 0xf0, 0xf0, 0xf1, 0xe1, 0xe0, 0x7, 0xc0,
    0xfc, 0x7, 0x80, 0x1e, 0x0, 0x3f, 0xfc,

    /* U+0033 "3" */
    0xf, 0xff, 0x0, 0xf, 0x80, 0x7, 0x80, 0x7,
    0xf0, 0x0, 0x1f, 0x3, 0x83, 0xc0, 0xf0, 0xf0,
    0xf, 0xf8,

    /* U+0034 "4" */
    0x0, 0x7e, 0x0, 0x7, 0xf0, 0x0, 0xf7, 0x80,
    0xf, 0x3c, 0x0, 0xf1, 0xe0, 0x7, 0xff, 0xc0,
    0x0, 0x78, 0x0, 0x3, 0xc0,

    /* U+0035 "5" */
    0x3f, 0xf8, 0x78, 0x0, 0xf0, 0x1, 0xff, 0x81,
    0x87, 0x86, 0x7, 0x9f, 0x1e, 0xf, 0xf8,

    /* U+0036 "6" */
    0x1f, 0xe0, 0xf8, 0xf1, 0xe0, 0x43, 0xff, 0x87,
    0xc7, 0x8f, 0x7, 0x1f, 0x1e, 0xf, 0xf8,

    /* U+0037 "7" */
    0x1f, 0xff, 0x0, 0x7, 0x80, 0x3, 0xc0, 0x1,
    0xe0, 0x0, 0x70, 0x0, 0x3c, 0x0, 0x1e, 0x0,
    0xf, 0x0,

    /* U+0038 "8" */
    0x1f, 0xf0, 0xf8, 0xf0, 0xe1, 0xe0, 0xff, 0x3,
    0xc7, 0x8f, 0xf, 0x1f, 0x1e, 0xf, 0xf8,

    /* U+0039 "9" */
    0x1f, 0xf0, 0xf0, 0xf1, 0xe1, 0xe3, 0xc3, 0xc3,
    0xff, 0x80, 0xf, 0xf, 0x1e, 0xf, 0xf8,

    /* U+003A ":" */
    0x0, 0x3e, 0x0, 0x0, 0x7, 0xc0,

    /* U+003B ";" */
    0x0, 0x3e, 0x0, 0x0, 0x7, 0xe0, 0xe0, 0x0,

    /* U+003C "<" */
    0x0, 0x7e, 0xf, 0xc0, 0x1, 0xff, 0xe0, 0x0,
    0x0,

    /* U+003D "=" */
    0x7f, 0xfc, 0x0, 0x1, 0xff, 0xf0,

    /* U+003E ">" */
    0x3e, 0x0, 0x0, 0x1f, 0x83, 0xff, 0xc0, 0x0,
    0x0,

    /* U+003F "?" */
    0x3, 0xfe, 0x3, 0xe3, 0xc0, 0xf0, 0xf0, 0x0,
    0x7c, 0x0, 0x7c, 0x0, 0x38, 0x0, 0x0, 0x0,
    0x7, 0xc0,

    /* U+0040 "@" */
    0xf, 0xff, 0x1, 0xc0, 0xf, 0x1c, 0x0, 0x38,
    0xe7, 0xb9, 0xc7, 0x39, 0xce, 0x39, 0xce, 0x71,
    0xc6, 0x1f, 0x7, 0x0, 0x3c, 0xf, 0xff, 0x80,

    /* U+0041 "A" */
    0x3, 0xfc, 0x0, 0xff, 0x0, 0x39, 0xc0, 0x1e,
    0x78, 0x7, 0x8e, 0x1, 0xff, 0xc0, 0xf0, 0xf0,
    0x3c, 0x3c,

    /* U+0042 "B" */
    0x3f, 0xf0, 0x78, 0xf0, 0xe1, 0xe1, 0xff, 0x3,
    0xcf, 0x87, 0xf, 0xf, 0x1e, 0x1f, 0xf0,

    /* U+0043 "C" */
    0x1f, 0xf0, 0x78, 0xf1, 0xe0, 0xe3, 0xc0, 0x7,
    0x80, 0xf, 0x7, 0x1f, 0x1e, 0xf, 0xf8,

    /* U+0044 "D" */
    0x3f, 0xf0, 0x78, 0xf0, 0xe1, 0xe1, 0xc3, 0xc3,
    0x87, 0x87, 0xf, 0xf, 0x1e, 0x1f, 0xf8,

    /* U+0045 "E" */
    0x3f, 0xf0, 0x78, 0x0, 0xe0, 0x1, 0xff, 0x3,
    0xc0, 0x7, 0x0, 0xf, 0x0, 0x1f, 0xf8,

    /* U+0046 "F" */
    0x3f, 0xf0, 0x78, 0x0, 0xe0, 0x1, 0xff, 0x3,
    0xc0, 0x7, 0x0, 0xe, 0x0, 0x1c, 0x0,

    /* U+0047 "G" */
    0x1f, 0xf0, 0x78, 0xf1, 0xe0, 0xe3, 0xc0, 0x7,
    0x8f, 0x8f, 0xf, 0xf, 0x1e, 0xf, 0xf8,

    /* U+0048 "H" */
    0x38, 0x78, 0x70, 0xf0, 0xe1, 0xe1, 0xff, 0xc3,
    0xc7, 0x87, 0xf, 0xe, 0x1e, 0x1c, 0x3c,

    /* U+0049 "I" */
    0x38, 0x1c, 0xe, 0x7, 0x3, 0x81, 0xc0, 0xe0,
    0x70,

    /* U+004A "J" */
    0x0, 0x1e, 0x0, 0x7, 0x80, 0x1, 0xe0, 0x0,
    0x78, 0x0, 0x1e, 0x3, 0x87, 0x80, 0xf1, 0xe0,
    0x1f, 0xf0,

    /* U+004B "K" */
    0x3c, 0x78, 0xf, 0x3c, 0x3, 0xde, 0x0, 0xff,
    0x0, 0x3f, 0xe0, 0xf, 0xbc, 0x3, 0xc7, 0x80,
    0xf0, 0xf0,

    /* U+004C "L" */
    0x38, 0x0, 0x70, 0x0, 0xe0, 0x1, 0xc0, 0x3,
    0x80, 0x7, 0x0, 0xf, 0x0, 0x1f, 0xf0,

    /* U+004D "M" */
    0x3f, 0x83, 0xfc, 0x3f, 0xc3, 0xfc, 0x39, 0xc7,
    0xbc, 0x39, 0xe7, 0x3c, 0x39, 0xe7, 0x3c, 0x3c,
    0xef, 0x3c, 0x3c, 0xfe, 0x3c, 0x3c, 0x7c, 0x3c,

    /* U+004E "N" */
    0x3f, 0xf, 0xf, 0xe3, 0xc3, 0xbc, 0xf0, 0xe7,
    0x3c, 0x39, 0xef, 0xe, 0x79, 0xc3, 0x8f, 0xf0,
    0xe1, 0xfc,

    /* U+004F "O" */
    0x1f, 0xf0, 0xf8, 0xf1, 0xe0, 0xe3, 0xc1, 0xc7,
    0x83, 0x8f, 0x7, 0xf, 0x1e, 0xf, 0xf8,

    /* U+0050 "P" */
    0x3f, 0xf0, 0x78, 0xf0, 0xe1, 0xe1, 0xc3, 0xc3,
    0xff, 0x7, 0x80, 0xe, 0x0, 0x1c, 0x0,

    /* U+0051 "Q" */
    0x1f, 0xf0, 0x78, 0xf1, 0xe0, 0xe3, 0xc1, 0xc7,
    0x83, 0x8f, 0x7, 0x1f, 0x1e, 0xf, 0xf8, 0x1,
    0xf0, 0x0, 0x0,

    /* U+0052 "R" */
    0x3f, 0xe0, 0x78, 0xf0, 0xe1, 0xe1, 0xc3, 0xc3,
    0xff, 0x7, 0xbc, 0xe, 0x3c, 0x1c, 0x3c,

    /* U+0053 "S" */
    0x1f, 0xe0, 0xf0, 0xf1, 0xe1, 0xe1, 0xf8, 0x0,
    0x3f, 0xf, 0xf, 0x1e, 0x1e, 0xf, 0xf0,

    /* U+0054 "T" */
    0x1f, 0xfe, 0x0, 0x78, 0x0, 0x1e, 0x0, 0x7,
    0x80, 0x1, 0xe0, 0x0, 0x78, 0x0, 0x1e, 0x0,
    0x7, 0x80,

    /* U+0055 "U" */
    0x78, 0x78, 0xf0, 0xf1, 0xe1, 0xe3, 0xc3, 0xc7,
    0x87, 0x8f, 0xf, 0x1f, 0x1e, 0xf, 0xf8,

    /* U+0056 "V" */
    0xf, 0x7, 0x83, 0xc3, 0xc0, 0x78, 0xf0, 0x1e,
    0x38, 0x7, 0x9e, 0x0, 0xe7, 0x80, 0x3f, 0xc0,
    0x7, 0xf0,

    /* U+0057 "W" */
    0xf, 0xf, 0xc3, 0xc0, 0x3c, 0x7f, 0x8f, 0x0,
    0xf1, 0xce, 0x38, 0x1, 0xcf, 0x3c, 0xe0, 0x7,
    0x3c, 0xf7, 0x80, 0x1e, 0xf3, 0xde, 0x0, 0x7f,
    0x8f, 0xf0, 0x0, 0xfe, 0x1f, 0xc0,

    /* U+0058 "X" */
    0xf, 0xe, 0x1, 0xc7, 0x80, 0x3f, 0xc0, 0x7,
    0xe0, 0x3, 0xf8, 0x1, 0xe7, 0x0, 0xf1, 0xe0,
    0x38, 0x3c,

    /* U+0059 "Y" */
    0xf, 0x1e, 0x3, 0xc7, 0x80, 0x7b, 0xc0, 0xf,
    0xe0, 0x3, 0xf0, 0x0, 0x7c, 0x0, 0xe, 0x0,
    0x3, 0x80,

    /* U+005A "Z" */
    0xf, 0xfc, 0x0, 0xf, 0x0, 0x7, 0x80, 0x7,
    0x80, 0x3, 0xc0, 0x1, 0xe0, 0x0, 0xf0, 0x0,
    0x7f, 0xf0,

    /* U+005B "[" */
    0x7f, 0x87, 0x80, 0x78, 0x7, 0x80, 0x78, 0x7,
    0x80, 0x78, 0x7, 0x80, 0x78, 0x7, 0xf8,

    /* U+005C "\\" */
    0xe, 0x0, 0x1e, 0x0, 0x1e, 0x0, 0x1c, 0x0,
    0x3c, 0x0, 0x3c, 0x0, 0x78, 0x0, 0x78, 0x0,
    0x78, 0x0, 0xf0,

    /* U+005D "]" */
    0x7, 0xf0, 0x1, 0xe0, 0x3, 0xc0, 0x7, 0x80,
    0xf, 0x0, 0x1e, 0x0, 0x3c, 0x0, 0x78, 0x0,
    0xf0, 0xf, 0xe0,

    /* U+005E "^" */
    0x0, 0x0, 0x1f, 0x0, 0xe3, 0x80,

    /* U+005F "_" */
    0x0, 0x0, 0x0,

    /* U+0060 "`" */
    0x0, 0x1c, 0x0, 0x0,

    /* U+0061 "a" */
    0x3, 0xfc, 0x1, 0xc3, 0x80, 0x3, 0xf0, 0x1e,
    0x7c, 0xf, 0xf, 0x1, 0xff, 0xc0,

    /* U+0062 "b" */
    0x78, 0x0, 0xf0, 0x1, 0xff, 0xc3, 0xe3, 0xc7,
    0x83, 0x8f, 0x7, 0x1f, 0x1e, 0x3f, 0xf8,

    /* U+0063 "c" */
    0x1f, 0xe0, 0xf0, 0xe1, 0xe0, 0x3, 0xc0, 0x7,
    0x87, 0x3, 0xfc, 0x0,

    /* U+0064 "d" */
    0x0, 0x78, 0x0, 0xf0, 0xff, 0xe3, 0xc3, 0xc7,
    0x87, 0x8f, 0xf, 0x1e, 0x1e, 0x1f, 0xbc,

    /* U+0065 "e" */
    0x1f, 0xe0, 0xf0, 0xe1, 0xff, 0xc3, 0xc0, 0x7,
    0x87, 0x3, 0xfc, 0x0,

    /* U+0066 "f" */
    0x1, 0xf8, 0xf, 0x0, 0x7f, 0xe0, 0x3c, 0x0,
    0x78, 0x0, 0xf0, 0x1, 0xe0, 0x3, 0xc0,

    /* U+0067 "g" */
    0x1f, 0xfe, 0x1e, 0x3e, 0x7, 0x87, 0x81, 0xe1,
    0xc0, 0x1f, 0xe0, 0xf, 0xf8, 0x3, 0x83, 0x80,
    0xff, 0xc0,

    /* U+0068 "h" */
    0x78, 0x0, 0xf0, 0x1, 0xff, 0xc3, 0xe3, 0xc7,
    0x83, 0x8f, 0x7, 0x1e, 0xe, 0x3c, 0x1c,

    /* U+0069 "i" */
    0x78, 0x0, 0x1e, 0xf, 0x7, 0x83, 0xc1, 0xe0,
    0xf0,

    /* U+006A "j" */
    0x1, 0xf0, 0x0, 0x0, 0x7, 0x80, 0xf, 0x0,
    0x1e, 0x0, 0x3c, 0x0, 0x78, 0x0, 0xf0, 0x1,
    0xe0, 0x3f, 0x80,

    /* U+006B "k" */
    0x78, 0x0, 0xf0, 0x1, 0xe3, 0xc3, 0xde, 0x7,
    0xf8, 0xf, 0xf8, 0x1e, 0x78, 0x3c, 0x3c,

    /* U+006C "l" */
    0x78, 0x3c, 0x1e, 0xf, 0x7, 0x83, 0xc1, 0xe0,
    0xf0,

    /* U+006D "m" */
    0x7f, 0xfb, 0xf0, 0x78, 0x78, 0x78, 0x78, 0x78,
    0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78,
    0x78, 0x78,

    /* U+006E "n" */
    0x7f, 0xf0, 0xf8, 0x71, 0xe0, 0xf3, 0xc1, 0xe7,
    0x83, 0xcf, 0x7, 0x80,

    /* U+006F "o" */
    0x1f, 0xe0, 0xf0, 0xf1, 0xe1, 0xe3, 0xc3, 0xc7,
    0x87, 0x83, 0xfc, 0x0,

    /* U+0070 "p" */
    0x7d, 0xf0, 0xf8, 0xf1, 0xe0, 0xe3, 0xc1, 0xc7,
    0xc7, 0x8f, 0xfe, 0x1e, 0x0, 0x3c, 0x0,

    /* U+0071 "q" */
    0x3f, 0x78, 0xf0, 0xf1, 0xe1, 0xe3, 0xc3, 0xc7,
    0x87, 0x87, 0xff, 0x0, 0x1e, 0x0, 0x3c,

    /* U+0072 "r" */
    0x7f, 0xc7, 0xc0, 0x78, 0x7, 0x80, 0x78, 0x7,
    0x80,

    /* U+0073 "s" */
    0x7, 0xfc, 0x3, 0xc7, 0x80, 0xfc, 0x0, 0x1,
    0xf8, 0xf, 0x1e, 0x1, 0xff, 0x0,

    /* U+0074 "t" */
    0x1, 0x0, 0xf, 0x0, 0x3f, 0xc0, 0x3c, 0x0,
    0x78, 0x0, 0xf0, 0x1, 0xe0, 0x0, 0xfc,

    /* U+0075 "u" */
    0x78, 0x78, 0xf0, 0xf1, 0xe1, 0xe3, 0xc3, 0xc7,
    0x87, 0x87, 0xff, 0x0,

    /* U+0076 "v" */
    0xf, 0x1e, 0x3, 0xc7, 0x80, 0x71, 0xc0, 0x1e,
    0xf0, 0x7, 0xf8, 0x0, 0xfe, 0x0,

    /* U+0077 "w" */
    0xe, 0x3f, 0x8f, 0x1, 0xe7, 0xf9, 0xe0, 0x3c,
    0xe7, 0x38, 0x3, 0x9c, 0xe7, 0x0, 0x7f, 0x9f,
    0xe0, 0x7, 0xf3, 0xf8, 0x0,

    /* U+0078 "x" */
    0xf, 0x1c, 0x1, 0xfe, 0x0, 0x3f, 0x0, 0xf,
    0xe0, 0x7, 0x3c, 0x3, 0x87, 0x0,

    /* U+0079 "y" */
    0xf, 0xe, 0x3, 0xc7, 0x80, 0x71, 0xc0, 0x1e,
    0x70, 0x3, 0xf8, 0x0, 0xfe, 0x0, 0xf, 0x0,
    0x3f, 0x80,

    /* U+007A "z" */
    0xf, 0xfc, 0x0, 0x1e, 0x0, 0xf, 0x0, 0xf,
    0x0, 0x7, 0x80, 0x3, 0xff, 0x0,

    /* U+007B "{" */
    0x0, 0x78, 0x3, 0xc0, 0x7, 0x80, 0xe, 0x0,
    0xf8, 0x0, 0x78, 0x0, 0x78, 0x0, 0xf0, 0x1,
    0xe0, 0x0, 0xf0,

    /* U+007C "|" */
    0x78, 0x3c, 0x1e, 0xf, 0x7, 0x83, 0xc1, 0xe0,
    0xf0, 0x78, 0x3c, 0x0,

    /* U+007D "}" */
    0x7, 0x80, 0x3, 0xc0, 0x7, 0x80, 0xf, 0x0,
    0x7, 0x80, 0x3c, 0x0, 0x78, 0x0, 0xf0, 0x1,
    0xe0, 0x1f, 0x0,

    /* U+007E "~" */
    0x1f, 0xc, 0xc, 0x3e, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 35, .box_w = 6, .box_h = 0, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 41, .box_w = 12, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 12, .adv_w = 62, .box_w = 12, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 17, .adv_w = 113, .box_w = 27, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 44, .adv_w = 76, .box_w = 15, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 63, .adv_w = 104, .box_w = 21, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 84, .adv_w = 96, .box_w = 18, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 32, .box_w = 6, .box_h = 3, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 105, .adv_w = 47, .box_w = 12, .box_h = 10, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 120, .adv_w = 45, .box_w = 12, .box_h = 10, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 135, .adv_w = 44, .box_w = 12, .box_h = 3, .ofs_x = -1, .ofs_y = 5},
    {.bitmap_index = 140, .adv_w = 84, .box_w = 18, .box_h = 5, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 152, .adv_w = 40, .box_w = 9, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 157, .adv_w = 69, .box_w = 18, .box_h = 2, .ofs_x = -1, .ofs_y = 2},
    {.bitmap_index = 162, .adv_w = 38, .box_w = 12, .box_h = 2, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 65, .box_w = 18, .box_h = 10, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 188, .adv_w = 78, .box_w = 15, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 203, .adv_w = 43, .box_w = 12, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 215, .adv_w = 76, .box_w = 15, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 230, .adv_w = 76, .box_w = 18, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 248, .adv_w = 79, .box_w = 21, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 269, .adv_w = 78, .box_w = 15, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 284, .adv_w = 78, .box_w = 15, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 299, .adv_w = 71, .box_w = 18, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 317, .adv_w = 77, .box_w = 15, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 332, .adv_w = 77, .box_w = 15, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 40, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 353, .adv_w = 42, .box_w = 9, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 361, .adv_w = 92, .box_w = 18, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 370, .adv_w = 82, .box_w = 15, .box_h = 3, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 376, .adv_w = 87, .box_w = 18, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 385, .adv_w = 76, .box_w = 18, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 403, .adv_w = 109, .box_w = 21, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 427, .adv_w = 76, .box_w = 18, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 445, .adv_w = 76, .box_w = 15, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 460, .adv_w = 77, .box_w = 15, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 475, .adv_w = 78, .box_w = 15, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 490, .adv_w = 66, .box_w = 15, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 505, .adv_w = 65, .box_w = 15, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 520, .adv_w = 78, .box_w = 15, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 535, .adv_w = 79, .box_w = 15, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 550, .adv_w = 37, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 559, .adv_w = 72, .box_w = 18, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 577, .adv_w = 77, .box_w = 18, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 595, .adv_w = 62, .box_w = 15, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 610, .adv_w = 125, .box_w = 24, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 634, .adv_w = 93, .box_w = 18, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 652, .adv_w = 79, .box_w = 15, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 667, .adv_w = 75, .box_w = 15, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 682, .adv_w = 79, .box_w = 15, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 701, .adv_w = 76, .box_w = 15, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 716, .adv_w = 76, .box_w = 15, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 731, .adv_w = 65, .box_w = 18, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 749, .adv_w = 78, .box_w = 15, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 764, .adv_w = 77, .box_w = 18, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 782, .adv_w = 127, .box_w = 30, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 812, .adv_w = 72, .box_w = 18, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 830, .adv_w = 69, .box_w = 18, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 848, .adv_w = 64, .box_w = 18, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 866, .adv_w = 56, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 881, .adv_w = 62, .box_w = 15, .box_h = 10, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 900, .adv_w = 56, .box_w = 15, .box_h = 10, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 919, .adv_w = 69, .box_w = 15, .box_h = 3, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 925, .adv_w = 108, .box_w = 24, .box_h = 1, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 928, .adv_w = 44, .box_w = 9, .box_h = 3, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 932, .adv_w = 75, .box_w = 18, .box_h = 6, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 946, .adv_w = 78, .box_w = 15, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 961, .adv_w = 72, .box_w = 15, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 973, .adv_w = 78, .box_w = 15, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 988, .adv_w = 72, .box_w = 15, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1000, .adv_w = 54, .box_w = 15, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1015, .adv_w = 78, .box_w = 18, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1033, .adv_w = 80, .box_w = 15, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1048, .adv_w = 36, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1057, .adv_w = 36, .box_w = 15, .box_h = 10, .ofs_x = -2, .ofs_y = -2},
    {.bitmap_index = 1076, .adv_w = 71, .box_w = 15, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1091, .adv_w = 36, .box_w = 9, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1100, .adv_w = 119, .box_w = 24, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1118, .adv_w = 80, .box_w = 15, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1130, .adv_w = 75, .box_w = 15, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1142, .adv_w = 78, .box_w = 15, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1157, .adv_w = 78, .box_w = 15, .box_h = 8, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1172, .adv_w = 55, .box_w = 12, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1181, .adv_w = 69, .box_w = 18, .box_h = 6, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1195, .adv_w = 54, .box_w = 15, .box_h = 8, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1210, .adv_w = 79, .box_w = 15, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1222, .adv_w = 69, .box_w = 18, .box_h = 6, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1236, .adv_w = 116, .box_w = 27, .box_h = 6, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1257, .adv_w = 65, .box_w = 18, .box_h = 6, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1271, .adv_w = 70, .box_w = 18, .box_h = 8, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 1289, .adv_w = 62, .box_w = 18, .box_h = 6, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 1303, .adv_w = 61, .box_w = 15, .box_h = 10, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 1322, .adv_w = 35, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1334, .adv_w = 61, .box_w = 15, .box_h = 10, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 1353, .adv_w = 85, .box_w = 18, .box_h = 2, .ofs_x = 0, .ofs_y = 3}
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
    1, 14,
    11, 1,
    13, 11,
    14, 53,
    14, 55,
    14, 57,
    14, 59,
    14, 89,
    15, 11,
    16, 16,
    19, 21,
    24, 21,
    34, 11,
    34, 36,
    34, 40,
    34, 48,
    34, 50,
    34, 53,
    34, 55,
    34, 56,
    34, 57,
    34, 58,
    34, 68,
    34, 69,
    34, 70,
    34, 71,
    34, 80,
    34, 82,
    34, 85,
    34, 87,
    34, 88,
    34, 90,
    35, 34,
    35, 55,
    35, 56,
    35, 57,
    35, 58,
    36, 34,
    36, 53,
    37, 34,
    37, 53,
    37, 55,
    37, 56,
    37, 57,
    37, 58,
    37, 59,
    37, 86,
    38, 11,
    38, 72,
    38, 78,
    38, 79,
    38, 81,
    38, 83,
    38, 84,
    38, 85,
    38, 87,
    39, 11,
    39, 13,
    39, 15,
    39, 34,
    39, 36,
    39, 40,
    39, 43,
    39, 48,
    39, 50,
    39, 53,
    39, 66,
    39, 68,
    39, 69,
    39, 70,
    39, 71,
    39, 74,
    39, 75,
    39, 78,
    39, 79,
    39, 80,
    39, 81,
    39, 82,
    39, 83,
    39, 86,
    39, 89,
    39, 90,
    39, 91,
    40, 34,
    40, 57,
    44, 14,
    44, 32,
    44, 36,
    44, 40,
    44, 48,
    44, 50,
    44, 68,
    44, 69,
    44, 70,
    44, 80,
    44, 82,
    44, 86,
    44, 90,
    45, 11,
    45, 13,
    45, 14,
    45, 15,
    45, 32,
    45, 36,
    45, 40,
    45, 48,
    45, 50,
    45, 53,
    45, 55,
    45, 56,
    45, 58,
    45, 68,
    45, 69,
    45, 70,
    45, 71,
    45, 80,
    45, 82,
    45, 84,
    45, 86,
    45, 87,
    45, 88,
    45, 90,
    48, 34,
    48, 53,
    48, 55,
    48, 56,
    48, 57,
    48, 58,
    48, 59,
    48, 86,
    49, 13,
    49, 15,
    49, 34,
    49, 43,
    49, 57,
    49, 58,
    49, 59,
    49, 66,
    50, 34,
    50, 53,
    50, 55,
    50, 56,
    50, 57,
    50, 58,
    50, 59,
    50, 86,
    51, 43,
    51, 58,
    51, 68,
    51, 69,
    51, 70,
    51, 80,
    51, 82,
    53, 1,
    53, 13,
    53, 14,
    53, 15,
    53, 34,
    53, 36,
    53, 40,
    53, 48,
    53, 50,
    53, 53,
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
    55, 1,
    55, 13,
    55, 14,
    55, 15,
    55, 27,
    55, 28,
    55, 32,
    55, 34,
    55, 36,
    55, 40,
    55, 43,
    55, 48,
    55, 50,
    55, 59,
    55, 66,
    55, 68,
    55, 69,
    55, 70,
    55, 72,
    55, 78,
    55, 79,
    55, 80,
    55, 81,
    55, 82,
    55, 83,
    55, 84,
    55, 86,
    55, 87,
    55, 88,
    55, 90,
    55, 91,
    56, 13,
    56, 14,
    56, 15,
    56, 34,
    56, 36,
    56, 40,
    56, 43,
    56, 48,
    56, 50,
    56, 66,
    56, 68,
    56, 69,
    56, 70,
    56, 72,
    56, 78,
    56, 79,
    56, 80,
    56, 81,
    56, 82,
    56, 83,
    56, 84,
    56, 86,
    56, 89,
    56, 91,
    57, 1,
    57, 14,
    57, 34,
    57, 36,
    57, 40,
    57, 43,
    57, 48,
    57, 50,
    57, 56,
    57, 66,
    57, 68,
    57, 69,
    57, 70,
    57, 71,
    57, 72,
    57, 80,
    57, 82,
    57, 84,
    57, 85,
    57, 86,
    57, 87,
    57, 88,
    57, 89,
    57, 90,
    58, 13,
    58, 15,
    58, 34,
    58, 36,
    58, 40,
    58, 43,
    58, 48,
    58, 50,
    58, 66,
    58, 68,
    58, 69,
    58, 70,
    58, 72,
    58, 78,
    58, 79,
    58, 80,
    58, 81,
    58, 82,
    58, 83,
    58, 84,
    58, 86,
    58, 87,
    58, 88,
    58, 89,
    58, 90,
    58, 91,
    59, 14,
    59, 34,
    59, 36,
    59, 40,
    59, 43,
    59, 48,
    59, 50,
    59, 66,
    59, 68,
    59, 69,
    59, 70,
    59, 72,
    59, 75,
    59, 80,
    59, 82,
    59, 84,
    59, 86,
    60, 92,
    66, 3,
    66, 8,
    66, 10,
    66, 11,
    66, 24,
    66, 32,
    66, 62,
    66, 88,
    66, 94,
    67, 11,
    67, 13,
    67, 15,
    67, 62,
    67, 87,
    67, 88,
    67, 89,
    67, 90,
    67, 91,
    69, 66,
    69, 68,
    69, 69,
    69, 70,
    69, 72,
    69, 80,
    69, 82,
    70, 11,
    70, 66,
    70, 67,
    70, 73,
    70, 76,
    70, 77,
    70, 87,
    70, 88,
    70, 89,
    70, 91,
    71, 1,
    71, 13,
    71, 14,
    71, 15,
    71, 32,
    71, 66,
    71, 68,
    71, 69,
    71, 70,
    71, 72,
    71, 74,
    71, 80,
    71, 82,
    71, 85,
    71, 90,
    72, 13,
    72, 15,
    72, 66,
    72, 67,
    72, 68,
    72, 69,
    72, 70,
    72, 73,
    72, 75,
    72, 76,
    72, 77,
    72, 80,
    72, 82,
    73, 3,
    73, 8,
    73, 10,
    73, 11,
    73, 24,
    73, 32,
    73, 62,
    73, 88,
    73, 94,
    76, 1,
    76, 14,
    76, 68,
    76, 69,
    76, 70,
    76, 72,
    76, 80,
    76, 82,
    76, 84,
    76, 87,
    77, 66,
    77, 68,
    77, 69,
    77, 70,
    77, 72,
    77, 80,
    77, 82,
    78, 3,
    78, 8,
    78, 10,
    78, 11,
    78, 24,
    78, 32,
    78, 62,
    78, 88,
    78, 94,
    79, 3,
    79, 8,
    79, 10,
    79, 11,
    79, 24,
    79, 32,
    79, 62,
    79, 88,
    79, 94,
    80, 11,
    80, 13,
    80, 15,
    80, 62,
    80, 87,
    80, 88,
    80, 89,
    80, 90,
    80, 91,
    81, 11,
    81, 13,
    81, 15,
    81, 62,
    81, 87,
    81, 88,
    81, 89,
    81, 90,
    81, 91,
    82, 66,
    82, 68,
    82, 69,
    82, 70,
    82, 72,
    82, 80,
    82, 82,
    83, 1,
    83, 13,
    83, 14,
    83, 15,
    83, 66,
    83, 68,
    83, 69,
    83, 70,
    83, 72,
    83, 80,
    83, 82,
    84, 3,
    84, 8,
    84, 11,
    84, 13,
    84, 15,
    84, 32,
    84, 89,
    85, 1,
    85, 14,
    85, 75,
    85, 78,
    85, 79,
    85, 81,
    85, 83,
    85, 88,
    85, 90,
    87, 1,
    87, 11,
    87, 13,
    87, 15,
    87, 66,
    87, 72,
    88, 13,
    88, 15,
    88, 66,
    88, 68,
    88, 69,
    88, 70,
    88, 72,
    88, 80,
    88, 82,
    89, 11,
    89, 13,
    89, 14,
    89, 15,
    89, 32,
    89, 66,
    89, 68,
    89, 69,
    89, 70,
    89, 80,
    89, 82,
    89, 84,
    89, 85,
    89, 86,
    89, 88,
    89, 90,
    90, 1,
    90, 11,
    90, 13,
    90, 15,
    90, 66,
    90, 67,
    90, 68,
    90, 69,
    90, 70,
    90, 72,
    90, 73,
    90, 76,
    90, 77,
    90, 80,
    90, 82,
    90, 85,
    90, 89,
    91, 11,
    91, 66,
    91, 67,
    91, 68,
    91, 69,
    91, 70,
    91, 73,
    91, 76,
    91, 77,
    91, 80,
    91, 82,
    91, 91,
    94, 62
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -3, -3, -9, -8, -4, -6, -4, -3,
    -9, -23, -3, -6, -8, -2, -2, -2,
    -2, -6, -6, -4, -3, -8, -1, -1,
    -1, -1, -1, -1, -1, -4, -2, -3,
    -1, -3, -3, -5, -5, -1, -1, -1,
    -1, -2, -1, -3, -2, -1, -1, -1,
    0, 0, 0, 0, 0, 0, -3, -1,
    -1, -6, -6, -3, 0, 0, -5, 0,
    0, 2, -1, -2, -2, -2, -2, -1,
    -1, 0, 0, -2, 0, -2, 0, -1,
    -6, -1, -3, -1, -3, -5, -6, -2,
    -2, -2, -2, -2, -2, -2, -2, -2,
    -1, -3, -12, 6, -12, 6, -10, -1,
    -1, -1, -1, -7, -7, -4, -10, -1,
    -1, -1, -5, -1, -1, -3, -1, -4,
    -3, -4, -1, -1, -2, -1, -3, -2,
    -1, -1, -11, -11, -3, -9, -2, -3,
    -3, -1, -1, -1, -2, -1, -3, -2,
    -1, -1, -1, -5, -1, -1, -1, -1,
    -1, -1, -10, -8, -10, -6, -1, -1,
    -1, -1, 2, -7, -8, -8, -8, -9,
    -6, -6, -8, -6, -8, -6, -6, -5,
    -4, -5, -4, -4, -4, -3, -11, -4,
    -11, -3, -3, -3, -6, -2, -2, -6,
    -2, -2, -2, -6, -5, -5, -5, -5,
    -2, -2, -5, -2, -5, -2, -5, -5,
    -1, -1, -2, -4, -4, -2, -4, -3,
    -1, -1, -5, -1, -1, -3, -3, -3,
    -3, -4, -1, -1, -3, -1, -3, -1,
    -2, -3, -3, -3, -3, -6, -3, -3,
    -3, -5, -3, -3, -1, -1, -2, -2,
    -2, -5, -2, -2, -2, -3, -1, -2,
    -2, -4, -3, -6, -14, -14, -8, -2,
    -2, -12, -2, -2, -7, -7, -7, -7,
    -6, -5, -5, -7, -5, -7, -5, -6,
    -4, -2, -2, -2, -1, -3, -6, 0,
    -1, -1, -3, -1, -1, -1, -2, -2,
    -2, -2, -1, -2, -2, -1, -2, -9,
    -4, -4, -1, -3, -1, -3, -7, -1,
    -1, -2, -1, -1, -5, -1, -1, -3,
    -2, -2, -2, -3, -3, -3, -4, -3,
    -3, -7, -1, 0, 0, 0, 0, -1,
    -3, -2, -3, -5, -13, -5, -13, 2,
    -2, -2, -2, -2, -1, -1, -2, -2,
    -1, -4, -6, -6, 0, -2, -1, -1,
    -1, -2, 2, -2, -2, -1, -1, -4,
    -4, -1, -3, -1, -3, -7, -1, -1,
    -1, -7, -2, -2, -2, -2, -2, -2,
    -2, 0, -2, -3, -3, -3, -4, -3,
    -3, -4, -4, -1, -3, -1, -3, -7,
    -1, -1, -4, -4, -1, -3, -1, -3,
    -7, -1, -1, -2, -1, -1, -5, -1,
    -1, -3, -2, -2, -2, -1, -1, -5,
    -1, -1, -3, -2, -2, -2, -3, -3,
    -3, -4, -3, -3, -5, -12, -6, -12,
    -2, -2, -2, -2, -1, -2, -2, -1,
    -1, -7, -2, -2, -6, -2, -5, -3,
    -3, -2, -2, -2, -2, 0, -2, -3,
    -3, -6, -6, -1, -4, -6, -6, -1,
    -1, -1, -1, -1, -1, -1, -3, -3,
    -3, -3, -4, -1, -3, -3, -3, -3,
    -3, -2, 0, -2, -3, -3, -3, -3,
    -6, -6, -4, -2, -2, -2, -2, -3,
    -2, -2, -2, -2, -2, 0, -3, -3,
    -2, -4, 0, 0, 0, -4, -4, -4,
    0, 0, 0, -9
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 524,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif

};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t big_shoulders_10 = {
#else
lv_font_t big_shoulders_10 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 11,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_HOR,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .static_bitmap = 0,
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if BIG_SHOULDERS_10*/
