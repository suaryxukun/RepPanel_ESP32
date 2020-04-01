#include "lvgl/lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_ARROWGORIGHT
#define LV_ATTRIBUTE_IMG_ARROWGORIGHT
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_ARROWGORIGHT uint8_t arrowgoright_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
/*Pixel format: Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
0x00, 0xbc, 0xbc, 0x9c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0x98, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0x9c, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xfc, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc,
0x00, 0x00, 0x00, 0x00, 0x00, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0x00,
0x00, 0x00, 0x00, 0x00, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0x00, 0x00,
0x00, 0x00, 0x00, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xfc, 0x00, 0x00,
0x00, 0x00, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0x9c, 0x00, 0x00, 0x00,
0x00, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0x98, 0x00, 0x00, 0x00, 0x00,
0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00,
0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xbc, 0xbc, 0xbc, 0xbc, 0xbc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0xbc, 0xbc, 0x9c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
        /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
        0x00, 0x00, 0xe0, 0x9e, 0xe0, 0x9e, 0x20, 0x97, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x9f, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0x00, 0xa7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0x60, 0x9e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xa7, 0x00, 0x9f, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0x00, 0x86, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0xe0, 0xa6, 0x00, 0x9f, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0x00, 0x86, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0xe0, 0x9e, 0x00, 0x9f, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x87,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e,
        0xe0, 0xff, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xa6, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e,
        0xe0, 0x9e, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e,
        0xe0, 0x9e, 0xe0, 0x9e, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e,
        0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e,
        0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e,
        0xe0, 0x9e, 0xe0, 0x9e, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xa6, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e,
        0xe0, 0x9e, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e,
        0xe0, 0xff, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0xe0, 0x9e, 0x00, 0x9f, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x87,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0xe0, 0xa6, 0x00, 0x9f, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0x00, 0x86, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xa7, 0x00, 0x9f, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0x00, 0x86, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0x60, 0x9e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x9f, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0x00, 0xa7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0xe0, 0x9e, 0xe0, 0x9e, 0x20, 0x97, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
/*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit BUT the 2 bytes are swapped*/
0x00, 0x00, 0x9e, 0xe0, 0x9e, 0xe0, 0x97, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x9f, 0x00, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0xa7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xa7, 0x00, 0x9f, 0x00, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0xa6, 0xe0, 0x9f, 0x00, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x9e, 0xe0, 0x9f, 0x00, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x87, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa6, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa6, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x9e, 0xe0, 0x9f, 0x00, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x87, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0xa6, 0xe0, 0x9f, 0x00, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xa7, 0x00, 0x9f, 0x00, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x9f, 0x00, 0x9e, 0xe0, 0x9e, 0xe0, 0x9e, 0xe0, 0xa7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x9e, 0xe0, 0x9e, 0xe0, 0x97, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
#endif
#if LV_COLOR_DEPTH == 32
/*Pixel format: Fix 0xFF: 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/
0x00, 0x00, 0x00, 0xff, 0x00, 0xdc, 0x9a, 0xff, 0x00, 0xdd, 0x99, 0xff, 0x00, 0xe3, 0x8e, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff,
0x00, 0xdf, 0x9b, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xdf, 0x9f, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff,
0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xcc, 0x99, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff,
0x00, 0xdf, 0x9f, 0xff, 0x00, 0xdf, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x99, 0xff, 0x00, 0xbf, 0x80, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff,
0x00, 0x00, 0x00, 0xff, 0x00, 0xdb, 0x9e, 0xff, 0x00, 0xdf, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xbf, 0x80, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff,
0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xdc, 0x97, 0xff, 0x00, 0xdf, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xdd, 0x9a, 0xff, 0x00, 0xff, 0x80, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff,
0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xdb, 0x9b, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff,
0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xdc, 0x9e, 0xff, 0x00, 0xde, 0x9b, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x99, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff,
0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xdc, 0x9c, 0xff, 0x00, 0xdd, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xdd, 0x99, 0xff, 0x00, 0x00, 0x00, 0xff,
0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xdd, 0x9a, 0xff, 0x00, 0xdd, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x99, 0xff,
0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xdd, 0x9a, 0xff, 0x00, 0xdd, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x99, 0xff,
0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xdc, 0x9c, 0xff, 0x00, 0xdd, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xdd, 0x99, 0xff, 0x00, 0x00, 0x00, 0xff,
0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xdc, 0x9e, 0xff, 0x00, 0xde, 0x9b, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x99, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff,
0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xdb, 0x9b, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff,
0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xdc, 0x97, 0xff, 0x00, 0xdf, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xdd, 0x9a, 0xff, 0x00, 0xff, 0x80, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff,
0x00, 0x00, 0x00, 0xff, 0x00, 0xdb, 0x9e, 0xff, 0x00, 0xdf, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xbf, 0x80, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff,
0x00, 0xdf, 0x9f, 0xff, 0x00, 0xdf, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x99, 0xff, 0x00, 0xbf, 0x80, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff,
0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xcc, 0x99, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff,
0x00, 0xdf, 0x9b, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xdf, 0x9f, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff,
0x00, 0x00, 0x00, 0xff, 0x00, 0xde, 0x98, 0xff, 0x00, 0xde, 0x9a, 0xff, 0x00, 0xe3, 0x8e, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff,
#endif
};

const lv_img_dsc_t arrowgoright = {
        .header.always_zero = 0,
        .header.w = 12,
        .header.h = 20,
        .data_size = 240 * LV_COLOR_SIZE / 8,
        .header.cf = LV_IMG_CF_TRUE_COLOR,
        .data = arrowgoright_map,
};
