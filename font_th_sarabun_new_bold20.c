/**
* The MIT License (MIT)
*
* Copyright (c) 2015 Deaware System (http://www.deaware.com)
* Author: Surawut Aonjaiaow
*         Burin Sapsiri
*
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*/

#include "dw_font.h"
#if defined(__AVR__)
    #include <avr/pgmspace.h>
    #define CONST_PREFIX           const PROGMEM
#elif defined(__XTENSA__)
    #include <pgmspace.h>
    #define CONST_PREFIX           const PROGMEM
#else
    #define CONST_PREFIX           const
#endif

static CONST_PREFIX dw_font_bitmap_t symbol_20 = {
    .width = 0,
    .height = 0,
    .data = {
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_21 = {
    .width = 2,
    .height = 10,
    .data = {
        0xff,
        0xfc,
        0xf0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_22 = {
    .width = 5,
    .height = 4,
    .data = {
        0xde,
        0xf7,
        0xb0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_23 = {
    .width = 8,
    .height = 10,
    .data = {
        0x26,
        0x24,
        0x64,
        0xff,
        0x44,
        0x44,
        0xfe,
        0x44,
        0x4c,
        0x4c,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_24 = {
    .width = 5,
    .height = 12,
    .data = {
        0x21,
        0x1f,
        0xac,
        0x71,
        0xc3,
        0x1c,
        0xf8,
        0x40,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_25 = {
    .width = 12,
    .height = 10,
    .data = {
        0x70,
        0x6d,
        0x88,
        0xd9,
        0x8d,
        0xb0,
        0xda,
        0xe7,
        0x5b,
        0x0d,
        0xb1,
        0x9b,
        0x31,
        0xb6,
        0x0e,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_26 = {
    .width = 9,
    .height = 10,
    .data = {
        0x3c,
        0x33,
        0x19,
        0x8d,
        0x83,
        0x83,
        0xcb,
        0x75,
        0x9c,
        0xc7,
        0x3c,
        0xc0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_27 = {
    .width = 1,
    .height = 4,
    .data = {
        0xf0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_28 = {
    .width = 5,
    .height = 12,
    .data = {
        0x19,
        0x18,
        0x8c,
        0x63,
        0x18,
        0xc3,
        0x08,
        0x30,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_29 = {
    .width = 5,
    .height = 12,
    .data = {
        0xc1,
        0x0c,
        0x31,
        0x8c,
        0x63,
        0x19,
        0x89,
        0x80,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_2a = {
    .width = 5,
    .height = 5,
    .data = {
        0x53,
        0x3e,
        0xc5,
        0x00,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_2b = {
    .width = 8,
    .height = 7,
    .data = {
        0x18,
        0x18,
        0x18,
        0xff,
        0x18,
        0x18,
        0x18,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_2c = {
    .width = 2,
    .height = 3,
    .data = {
        0xd8,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_2d = {
    .width = 4,
    .height = 2,
    .data = {
        0xff,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_2e = {
    .width = 1,
    .height = 1,
    .data = {
        0x80,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_2f = {
    .width = 9,
    .height = 11,
    .data = {
        0x01,
        0x81,
        0x80,
        0x80,
        0xc0,
        0xc0,
        0x60,
        0x60,
        0x20,
        0x30,
        0x30,
        0x30,
        0x00,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_30 = {
    .width = 7,
    .height = 10,
    .data = {
        0x38,
        0xdb,
        0x1e,
        0x3c,
        0x78,
        0xf1,
        0xe3,
        0x6c,
        0x70,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_31 = {
    .width = 5,
    .height = 10,
    .data = {
        0x33,
        0xac,
        0x63,
        0x18,
        0xc6,
        0x33,
        0xc0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_32 = {
    .width = 7,
    .height = 10,
    .data = {
        0x7d,
        0x8e,
        0x18,
        0x30,
        0xc3,
        0x0c,
        0x30,
        0xc1,
        0xfc,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_33 = {
    .width = 7,
    .height = 10,
    .data = {
        0x79,
        0x9a,
        0x30,
        0xc3,
        0xc8,
        0xc1,
        0x83,
        0x8d,
        0xf0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_34 = {
    .width = 8,
    .height = 10,
    .data = {
        0x0e,
        0x1e,
        0x36,
        0x66,
        0x66,
        0xe6,
        0xc6,
        0xff,
        0x06,
        0x06,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_35 = {
    .width = 7,
    .height = 10,
    .data = {
        0x7e,
        0xc1,
        0x83,
        0x07,
        0xc9,
        0xc1,
        0x83,
        0x8d,
        0xf0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_36 = {
    .width = 6,
    .height = 10,
    .data = {
        0x0c,
        0xe6,
        0x10,
        0xfb,
        0x3c,
        0xf3,
        0xcd,
        0xe0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_37 = {
    .width = 7,
    .height = 10,
    .data = {
        0xfe,
        0x1c,
        0x30,
        0xe1,
        0x83,
        0x0c,
        0x18,
        0x30,
        0x60,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_38 = {
    .width = 6,
    .height = 10,
    .data = {
        0x7b,
        0x3c,
        0xf3,
        0x7b,
        0x3c,
        0xf3,
        0xcd,
        0xe0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_39 = {
    .width = 6,
    .height = 10,
    .data = {
        0x7b,
        0x3c,
        0xf3,
        0xcf,
        0x37,
        0xc6,
        0x33,
        0x80,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_3a = {
    .width = 2,
    .height = 6,
    .data = {
        0xf0,
        0xf0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_3b = {
    .width = 2,
    .height = 8,
    .data = {
        0xf0,
        0xf6,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_3c = {
    .width = 7,
    .height = 8,
    .data = {
        0x06,
        0x3d,
        0xe6,
        0x0c,
        0x0f,
        0x07,
        0x83,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_3d = {
    .width = 6,
    .height = 5,
    .data = {
        0xff,
        0xf0,
        0x3f,
        0xfc,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_3e = {
    .width = 7,
    .height = 8,
    .data = {
        0xc1,
        0xe0,
        0xf0,
        0x30,
        0x67,
        0xbc,
        0x60,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_3f = {
    .width = 5,
    .height = 10,
    .data = {
        0x74,
        0xc6,
        0x33,
        0x98,
        0xc0,
        0x31,
        0x80,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_40 = {
    .width = 10,
    .height = 10,
    .data = {
        0x1f,
        0x08,
        0x65,
        0xce,
        0x09,
        0x9e,
        0x68,
        0x9a,
        0x2b,
        0x7c,
        0x62,
        0x07,
        0xc0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_41 = {
    .width = 9,
    .height = 10,
    .data = {
        0x1c,
        0x0e,
        0x0d,
        0x86,
        0xc3,
        0x63,
        0x19,
        0xfc,
        0xc6,
        0x63,
        0x60,
        0xc0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_42 = {
    .width = 7,
    .height = 10,
    .data = {
        0xfd,
        0x8f,
        0x1e,
        0x3f,
        0x99,
        0xf1,
        0xe3,
        0xcf,
        0xf0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_43 = {
    .width = 8,
    .height = 10,
    .data = {
        0x3f,
        0x71,
        0xe0,
        0xc0,
        0xc0,
        0xc0,
        0xc0,
        0xe0,
        0x71,
        0x3f,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_44 = {
    .width = 7,
    .height = 10,
    .data = {
        0xf9,
        0x9b,
        0x1e,
        0x3c,
        0x78,
        0xf1,
        0xe3,
        0xcd,
        0xf0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_45 = {
    .width = 6,
    .height = 10,
    .data = {
        0xff,
        0x0c,
        0x30,
        0xff,
        0x0c,
        0x30,
        0xc3,
        0xf0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_46 = {
    .width = 6,
    .height = 10,
    .data = {
        0xff,
        0x0c,
        0x30,
        0xc3,
        0xec,
        0x30,
        0xc3,
        0x00,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_47 = {
    .width = 8,
    .height = 10,
    .data = {
        0x3f,
        0x70,
        0xe0,
        0xc0,
        0xc0,
        0xcf,
        0xc3,
        0xc3,
        0x63,
        0x3f,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_48 = {
    .width = 7,
    .height = 10,
    .data = {
        0xc7,
        0x8f,
        0x1e,
        0x3f,
        0xf8,
        0xf1,
        0xe3,
        0xc7,
        0x8c,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_49 = {
    .width = 2,
    .height = 10,
    .data = {
        0xff,
        0xff,
        0xf0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_4a = {
    .width = 5,
    .height = 10,
    .data = {
        0x18,
        0xc6,
        0x31,
        0x8c,
        0x63,
        0x1f,
        0x80,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_4b = {
    .width = 8,
    .height = 10,
    .data = {
        0xc3,
        0xc6,
        0xcc,
        0xd8,
        0xf0,
        0xf0,
        0xd8,
        0xcc,
        0xc6,
        0xc3,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_4c = {
    .width = 6,
    .height = 10,
    .data = {
        0xc3,
        0x0c,
        0x30,
        0xc3,
        0x0c,
        0x30,
        0xc3,
        0xf0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_4d = {
    .width = 11,
    .height = 10,
    .data = {
        0xe0,
        0xfc,
        0x1f,
        0xc7,
        0xf8,
        0xfd,
        0x17,
        0xb6,
        0xf2,
        0x9e,
        0x73,
        0xce,
        0x78,
        0x8c,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_4e = {
    .width = 7,
    .height = 10,
    .data = {
        0xc7,
        0xcf,
        0x9f,
        0x3d,
        0x7a,
        0xf3,
        0xe3,
        0xc7,
        0x84,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_4f = {
    .width = 8,
    .height = 10,
    .data = {
        0x3c,
        0x66,
        0xc3,
        0xc3,
        0xc3,
        0xc3,
        0xc3,
        0xc3,
        0x66,
        0x3c,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_50 = {
    .width = 6,
    .height = 10,
    .data = {
        0xfb,
        0x3c,
        0xf3,
        0xcf,
        0xec,
        0x30,
        0xc3,
        0x00,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_51 = {
    .width = 8,
    .height = 11,
    .data = {
        0x3c,
        0x66,
        0xc3,
        0xc3,
        0xc3,
        0xc3,
        0xc3,
        0xc3,
        0x66,
        0x3c,
        0x03,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_52 = {
    .width = 7,
    .height = 10,
    .data = {
        0xf9,
        0x9b,
        0x36,
        0x6c,
        0xdf,
        0x33,
        0x66,
        0xcf,
        0x8c,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_53 = {
    .width = 5,
    .height = 10,
    .data = {
        0x7e,
        0x71,
        0x87,
        0x1c,
        0x63,
        0x9f,
        0x80,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_54 = {
    .width = 9,
    .height = 10,
    .data = {
        0xff,
        0x86,
        0x03,
        0x01,
        0x80,
        0xc0,
        0x60,
        0x30,
        0x18,
        0x0c,
        0x06,
        0x00,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_55 = {
    .width = 8,
    .height = 10,
    .data = {
        0xc3,
        0xc3,
        0xc3,
        0xc3,
        0xc3,
        0xc3,
        0xc3,
        0xc3,
        0x66,
        0x3c,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_56 = {
    .width = 9,
    .height = 10,
    .data = {
        0xc1,
        0xe0,
        0xd8,
        0xcc,
        0x66,
        0x31,
        0xb0,
        0xd8,
        0x6c,
        0x1c,
        0x0e,
        0x00,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_57 = {
    .width = 13,
    .height = 10,
    .data = {
        0xc2,
        0x1e,
        0x38,
        0xf1,
        0xc6,
        0xca,
        0x66,
        0xdb,
        0x36,
        0xd8,
        0xa2,
        0x87,
        0x1c,
        0x38,
        0xe1,
        0x83,
        0x00,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_58 = {
    .width = 8,
    .height = 10,
    .data = {
        0xc3,
        0x66,
        0x24,
        0x3c,
        0x18,
        0x18,
        0x3c,
        0x24,
        0x66,
        0xc3,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_59 = {
    .width = 8,
    .height = 10,
    .data = {
        0xc3,
        0x66,
        0x66,
        0x3c,
        0x3c,
        0x18,
        0x18,
        0x18,
        0x18,
        0x18,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_5a = {
    .width = 8,
    .height = 10,
    .data = {
        0xfe,
        0x06,
        0x0e,
        0x1c,
        0x18,
        0x38,
        0x70,
        0x60,
        0xc0,
        0xff,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_5b = {
    .width = 3,
    .height = 13,
    .data = {
        0xfb,
        0x6d,
        0xb6,
        0xdb,
        0x6e,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_5c = {
    .width = 7,
    .height = 11,
    .data = {
        0xc0,
        0x81,
        0x81,
        0x03,
        0x06,
        0x06,
        0x0c,
        0x0c,
        0x18,
        0x18,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_5d = {
    .width = 3,
    .height = 13,
    .data = {
        0xed,
        0xb6,
        0xdb,
        0x6d,
        0xbe,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_5e = {
    .width = 7,
    .height = 7,
    .data = {
        0x10,
        0x60,
        0xa2,
        0x44,
        0x58,
        0xa1,
        0x80,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_5f = {
    .width = 8,
    .height = 2,
    .data = {
        0xff,
        0xff,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_60 = {
    .width = 3,
    .height = 2,
    .data = {
        0xcc,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_61 = {
    .width = 6,
    .height = 7,
    .data = {
        0x78,
        0x30,
        0xdf,
        0xcf,
        0x37,
        0xc0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_62 = {
    .width = 7,
    .height = 10,
    .data = {
        0xc1,
        0x83,
        0x06,
        0xef,
        0xf8,
        0xf1,
        0xe3,
        0xfd,
        0xb8,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_63 = {
    .width = 5,
    .height = 7,
    .data = {
        0x7f,
        0x71,
        0x8c,
        0x75,
        0xe0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_64 = {
    .width = 7,
    .height = 10,
    .data = {
        0x06,
        0x0c,
        0x1b,
        0xbe,
        0xf8,
        0xf1,
        0xe3,
        0xee,
        0xec,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_65 = {
    .width = 6,
    .height = 7,
    .data = {
        0x7b,
        0x3c,
        0xff,
        0xc3,
        0x97,
        0xc0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_66 = {
    .width = 5,
    .height = 10,
    .data = {
        0x3b,
        0x19,
        0xf6,
        0x31,
        0x8c,
        0x63,
        0x00,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_67 = {
    .width = 6,
    .height = 10,
    .data = {
        0x7f,
        0x3c,
        0xf3,
        0x79,
        0x83,
        0x83,
        0x8d,
        0xe0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_68 = {
    .width = 6,
    .height = 10,
    .data = {
        0xc3,
        0x0c,
        0x3e,
        0xcf,
        0x3c,
        0xf3,
        0xcf,
        0x30,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_69 = {
    .width = 2,
    .height = 9,
    .data = {
        0xf3,
        0xff,
        0xc0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_6a = {
    .width = 4,
    .height = 12,
    .data = {
        0x33,
        0x03,
        0x33,
        0x33,
        0x33,
        0x3e,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_6b = {
    .width = 6,
    .height = 10,
    .data = {
        0xc3,
        0x0c,
        0x33,
        0xdb,
        0xce,
        0x3c,
        0xdb,
        0x30,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_6c = {
    .width = 4,
    .height = 10,
    .data = {
        0xcc,
        0xcc,
        0xcc,
        0xcc,
        0xe7,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_6d = {
    .width = 11,
    .height = 7,
    .data = {
        0xd9,
        0xdd,
        0xcf,
        0x31,
        0xe6,
        0x3c,
        0xc7,
        0x98,
        0xf3,
        0x18,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_6e = {
    .width = 6,
    .height = 7,
    .data = {
        0xdb,
        0xbc,
        0xf3,
        0xcf,
        0x3c,
        0xc0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_6f = {
    .width = 6,
    .height = 7,
    .data = {
        0x7b,
        0x3c,
        0xf3,
        0xcf,
        0x37,
        0x80,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_70 = {
    .width = 7,
    .height = 10,
    .data = {
        0xdd,
        0xdf,
        0x1e,
        0x3c,
        0x79,
        0xbf,
        0x60,
        0xc1,
        0x80,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_71 = {
    .width = 7,
    .height = 10,
    .data = {
        0x77,
        0xdf,
        0x1e,
        0x3c,
        0x7c,
        0xdf,
        0x83,
        0x06,
        0x0c,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_72 = {
    .width = 4,
    .height = 7,
    .data = {
        0xde,
        0xcc,
        0xcc,
        0xc0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_73 = {
    .width = 4,
    .height = 7,
    .data = {
        0x7c,
        0xc6,
        0x33,
        0xe0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_74 = {
    .width = 5,
    .height = 9,
    .data = {
        0x63,
        0x3e,
        0xc6,
        0x31,
        0x8c,
        0x38,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_75 = {
    .width = 6,
    .height = 7,
    .data = {
        0xcf,
        0x3c,
        0xf3,
        0xcf,
        0x37,
        0x40,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_76 = {
    .width = 8,
    .height = 7,
    .data = {
        0xc7,
        0xc6,
        0xc6,
        0x6c,
        0x6c,
        0x38,
        0x38,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_77 = {
    .width = 9,
    .height = 7,
    .data = {
        0xc9,
        0xee,
        0xf7,
        0x7a,
        0xb7,
        0x73,
        0x19,
        0x8c,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_78 = {
    .width = 7,
    .height = 7,
    .data = {
        0xc6,
        0xd8,
        0xe1,
        0xc3,
        0x8d,
        0xb1,
        0x80,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_79 = {
    .width = 7,
    .height = 10,
    .data = {
        0xc6,
        0xd9,
        0xb1,
        0x43,
        0x87,
        0x04,
        0x18,
        0xe1,
        0x80,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_7a = {
    .width = 7,
    .height = 7,
    .data = {
        0x7e,
        0x1c,
        0x71,
        0xc7,
        0x1c,
        0x3f,
        0x80,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_7b = {
    .width = 4,
    .height = 12,
    .data = {
        0x34,
        0x44,
        0x48,
        0x44,
        0x44,
        0x43,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_7c = {
    .width = 1,
    .height = 14,
    .data = {
        0xff,
        0xfc,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_7d = {
    .width = 3,
    .height = 12,
    .data = {
        0xc4,
        0xa4,
        0x52,
        0x24,
        0xe0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_7e = {
    .width = 7,
    .height = 2,
    .data = {
        0xf3,
        0x3c,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_7f = {
    .width = 12,
    .height = 16,
    .data = {
        0xff,
        0xf8,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x1f,
        0xff,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b880 = {
    .width = 0,
    .height = 0,
    .data = {
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b881 = {
    .width = 7,
    .height = 8,
    .data = {
        0x7d,
        0x8f,
        0x9a,
        0x3c,
        0x78,
        0xf1,
        0xe3,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b882 = {
    .width = 8,
    .height = 8,
    .data = {
        0x73,
        0xeb,
        0xab,
        0x53,
        0x33,
        0x33,
        0x33,
        0x1e,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b883 = {
    .width = 7,
    .height = 8,
    .data = {
        0x7b,
        0x2f,
        0x9c,
        0xb7,
        0xa1,
        0x42,
        0x87,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b884 = {
    .width = 8,
    .height = 8,
    .data = {
        0x7e,
        0xe7,
        0xd3,
        0xeb,
        0xf3,
        0x63,
        0x63,
        0x63,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b885 = {
    .width = 6,
    .height = 8,
    .data = {
        0x6a,
        0x5b,
        0x7d,
        0xf5,
        0x14,
        0x51,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b886 = {
    .width = 9,
    .height = 8,
    .data = {
        0x69,
        0xfe,
        0xf3,
        0x75,
        0x35,
        0x19,
        0xcd,
        0x5e,
        0x43,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b887 = {
    .width = 6,
    .height = 8,
    .data = {
        0x18,
        0xb1,
        0xe3,
        0x4c,
        0xb1,
        0xc3,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b888 = {
    .width = 7,
    .height = 8,
    .data = {
        0x7d,
        0x8c,
        0x1b,
        0xbb,
        0x6e,
        0xcd,
        0x8e,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b889 = {
    .width = 8,
    .height = 8,
    .data = {
        0x7e,
        0xc3,
        0x03,
        0xe3,
        0xe3,
        0x66,
        0x7d,
        0x62,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b88a = {
    .width = 8,
    .height = 8,
    .data = {
        0x73,
        0xeb,
        0xae,
        0x53,
        0x33,
        0x33,
        0x33,
        0x1e,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b88b = {
    .width = 8,
    .height = 8,
    .data = {
        0x6b,
        0xdb,
        0xce,
        0xab,
        0x5b,
        0x1b,
        0x1b,
        0x0e,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b88c = {
    .width = 10,
    .height = 8,
    .data = {
        0x7c,
        0xf1,
        0xbe,
        0x6d,
        0x1b,
        0xc6,
        0xf1,
        0xba,
        0xbd,
        0x93,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b88d = {
    .width = 10,
    .height = 12,
    .data = {
        0x78,
        0xf3,
        0x3e,
        0xcd,
        0x33,
        0xcc,
        0xf3,
        0x3a,
        0xcd,
        0x1e,
        0x00,
        0x03,
        0x90,
        0xac,
        0x1e,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b88e = {
    .width = 8,
    .height = 13,
    .data = {
        0x3e,
        0x63,
        0x73,
        0x3b,
        0x33,
        0x73,
        0xb3,
        0x63,
        0x03,
        0x0b,
        0x3b,
        0x57,
        0x23,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b88f = {
    .width = 8,
    .height = 13,
    .data = {
        0x3e,
        0x63,
        0x73,
        0x3b,
        0x33,
        0x73,
        0xb3,
        0x63,
        0x03,
        0x1b,
        0x6b,
        0xbf,
        0x6b,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b890 = {
    .width = 7,
    .height = 13,
    .data = {
        0x3a,
        0xdd,
        0xe1,
        0x35,
        0x66,
        0xcd,
        0x8e,
        0x00,
        0x5f,
        0x3d,
        0x1d,
        0xe0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b891 = {
    .width = 10,
    .height = 8,
    .data = {
        0x69,
        0xbf,
        0xbe,
        0xee,
        0xbb,
        0x5c,
        0xc7,
        0x31,
        0x8c,
        0x63,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b892 = {
    .width = 10,
    .height = 8,
    .data = {
        0x6c,
        0xf5,
        0xbd,
        0x6f,
        0xbb,
        0xd6,
        0xdf,
        0xb6,
        0xbd,
        0x93,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b893 = {
    .width = 10,
    .height = 8,
    .data = {
        0x78,
        0xf3,
        0x3c,
        0xcd,
        0xb3,
        0xcc,
        0xf3,
        0x6a,
        0xf7,
        0x32,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b894 = {
    .width = 7,
    .height = 8,
    .data = {
        0x7d,
        0x8f,
        0x5f,
        0x7d,
        0x7e,
        0xf9,
        0xe3,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b895 = {
    .width = 7,
    .height = 8,
    .data = {
        0x6d,
        0xaf,
        0x1e,
        0xbe,
        0xfa,
        0xf9,
        0xe3,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b896 = {
    .width = 7,
    .height = 8,
    .data = {
        0x7d,
        0x8f,
        0x9a,
        0x3c,
        0x78,
        0xe9,
        0xa3,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b897 = {
    .width = 9,
    .height = 8,
    .data = {
        0x63,
        0x5a,
        0xdd,
        0x67,
        0x33,
        0x99,
        0xcc,
        0xc6,
        0x63,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b898 = {
    .width = 7,
    .height = 8,
    .data = {
        0x73,
        0x9b,
        0xc0,
        0x76,
        0x6c,
        0xd9,
        0x9e,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b899 = {
    .width = 9,
    .height = 8,
    .data = {
        0x61,
        0xd8,
        0xdc,
        0x66,
        0x33,
        0x19,
        0x98,
        0xfa,
        0x62,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b89a = {
    .width = 9,
    .height = 8,
    .data = {
        0x61,
        0xd8,
        0xdc,
        0x66,
        0x33,
        0x19,
        0x8c,
        0xc6,
        0x3e,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b89b = {
    .width = 9,
    .height = 11,
    .data = {
        0x01,
        0x80,
        0xc0,
        0x6c,
        0x3b,
        0x1b,
        0x8c,
        0xc6,
        0x63,
        0x31,
        0x98,
        0xc7,
        0xc0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b89c = {
    .width = 7,
    .height = 8,
    .data = {
        0x47,
        0x4f,
        0x1e,
        0x3d,
        0x7d,
        0xfb,
        0xe3,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b89d = {
    .width = 7,
    .height = 11,
    .data = {
        0x06,
        0x0c,
        0x1e,
        0x3a,
        0x78,
        0xf1,
        0xeb,
        0xef,
        0xdf,
        0x18,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b89e = {
    .width = 9,
    .height = 8,
    .data = {
        0x65,
        0xda,
        0xdd,
        0x67,
        0x73,
        0xb9,
        0xcc,
        0xc6,
        0x63,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b89f = {
    .width = 9,
    .height = 11,
    .data = {
        0x01,
        0x80,
        0xc0,
        0x6c,
        0xbb,
        0x5b,
        0xac,
        0xee,
        0x77,
        0x3b,
        0x98,
        0xcc,
        0x60,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8a0 = {
    .width = 8,
    .height = 8,
    .data = {
        0x3e,
        0x63,
        0x73,
        0x3b,
        0x33,
        0x73,
        0xb3,
        0x63,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8a1 = {
    .width = 8,
    .height = 8,
    .data = {
        0x63,
        0xb3,
        0x73,
        0x33,
        0x33,
        0x7b,
        0xbf,
        0x67,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8a2 = {
    .width = 7,
    .height = 8,
    .data = {
        0x47,
        0x4f,
        0x1e,
        0x37,
        0x78,
        0xf1,
        0xbe,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8a3 = {
    .width = 7,
    .height = 8,
    .data = {
        0x76,
        0x9b,
        0xc0,
        0x60,
        0xc3,
        0x8b,
        0x0c,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8a4 = {
    .width = 7,
    .height = 11,
    .data = {
        0x7d,
        0x8f,
        0x9a,
        0x3c,
        0x78,
        0xe9,
        0xe3,
        0x06,
        0x0c,
        0x18,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8a5 = {
    .width = 8,
    .height = 8,
    .data = {
        0x7e,
        0xc3,
        0x3f,
        0x63,
        0x63,
        0x73,
        0x6b,
        0x33,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8a6 = {
    .width = 8,
    .height = 11,
    .data = {
        0x3e,
        0x63,
        0x73,
        0x3b,
        0x33,
        0x73,
        0xb3,
        0x63,
        0x03,
        0x03,
        0x03,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8a7 = {
    .width = 7,
    .height = 8,
    .data = {
        0x7d,
        0x8f,
        0x18,
        0x30,
        0x61,
        0xc5,
        0x86,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8a8 = {
    .width = 8,
    .height = 9,
    .data = {
        0x03,
        0x3e,
        0xe7,
        0xd3,
        0xeb,
        0xf3,
        0x63,
        0x63,
        0x63,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8a9 = {
    .width = 10,
    .height = 8,
    .data = {
        0x61,
        0xac,
        0x67,
        0x58,
        0xef,
        0x37,
        0x8c,
        0x63,
        0x18,
        0x7c,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8aa = {
    .width = 8,
    .height = 9,
    .data = {
        0x03,
        0x7e,
        0xc3,
        0x3f,
        0x63,
        0x63,
        0x73,
        0x6b,
        0x33,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8ab = {
    .width = 9,
    .height = 8,
    .data = {
        0x61,
        0x59,
        0x5c,
        0x46,
        0x73,
        0x59,
        0xec,
        0xe6,
        0x63,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8ac = {
    .width = 10,
    .height = 9,
    .data = {
        0x00,
        0xd9,
        0xeb,
        0x59,
        0xde,
        0x31,
        0x8d,
        0x63,
        0xb8,
        0xee,
        0x31,
        0x80,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8ad = {
    .width = 8,
    .height = 8,
    .data = {
        0x7e,
        0xc3,
        0x03,
        0x23,
        0x53,
        0x63,
        0x63,
        0x3e,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8ae = {
    .width = 8,
    .height = 9,
    .data = {
        0x07,
        0x76,
        0x8e,
        0x7e,
        0x46,
        0xa6,
        0xc6,
        0xc6,
        0x7c,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8af = {
    .width = 7,
    .height = 8,
    .data = {
        0x4f,
        0x7d,
        0xd8,
        0x30,
        0x60,
        0xc1,
        0x83,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8b0 = {
    .width = 7,
    .height = 7,
    .data = {
        0x47,
        0x5d,
        0xf0,
        0x04,
        0x75,
        0xdf,
        0x00,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8b1 = {
    .width = 7,
    .height = 3,
    .data = {
        0x47,
        0x59,
        0xe0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8b2 = {
    .width = 6,
    .height = 8,
    .data = {
        0x7b,
        0x3c,
        0xc3,
        0x0c,
        0x30,
        0xc3,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8b3 = {
    .width = 9,
    .height = 12,
    .data = {
        0x40,
        0x50,
        0x10,
        0x00,
        0x00,
        0xf0,
        0xcc,
        0x66,
        0x03,
        0x01,
        0x80,
        0xc0,
        0x60,
        0x30,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8b4 = {
    .width = 6,
    .height = 3,
    .data = {
        0x7a,
        0x1f,
        0xc0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8b5 = {
    .width = 6,
    .height = 4,
    .data = {
        0x0d,
        0xf8,
        0xff,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8b6 = {
    .width = 7,
    .height = 4,
    .data = {
        0x04,
        0xf6,
        0x37,
        0xe0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8b7 = {
    .width = 6,
    .height = 4,
    .data = {
        0x15,
        0xd8,
        0xff,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8b8 = {
    .width = 3,
    .height = 5,
    .data = {
        0x55,
        0xb6,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8b9 = {
    .width = 6,
    .height = 4,
    .data = {
        0xef,
        0xb6,
        0xdf,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8ba = {
    .width = 1,
    .height = 1,
    .data = {
        0x80,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8bb = {
    .width = 12,
    .height = 16,
    .data = {
        0xff,
        0xf8,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x1f,
        0xff,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8bc = {
    .width = 12,
    .height = 16,
    .data = {
        0xff,
        0xf8,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x1f,
        0xff,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8bd = {
    .width = 12,
    .height = 16,
    .data = {
        0xff,
        0xf8,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x1f,
        0xff,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8be = {
    .width = 12,
    .height = 16,
    .data = {
        0xff,
        0xf8,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x1f,
        0xff,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b8bf = {
    .width = 5,
    .height = 11,
    .data = {
        0x27,
        0xa3,
        0x1f,
        0x46,
        0x31,
        0xf3,
        0x08,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b980 = {
    .width = 4,
    .height = 8,
    .data = {
        0xcc,
        0xcc,
        0xce,
        0xd6,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b981 = {
    .width = 8,
    .height = 8,
    .data = {
        0xcc,
        0xcc,
        0xcc,
        0xcc,
        0xcc,
        0xee,
        0xdd,
        0x66,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b982 = {
    .width = 7,
    .height = 13,
    .data = {
        0x7b,
        0x89,
        0xc0,
        0xc1,
        0x83,
        0x06,
        0x0c,
        0x18,
        0x30,
        0x70,
        0xd0,
        0xc0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b983 = {
    .width = 7,
    .height = 13,
    .data = {
        0x79,
        0x9a,
        0xb2,
        0xc1,
        0x83,
        0x06,
        0x0c,
        0x18,
        0x30,
        0x70,
        0xd0,
        0xc0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b984 = {
    .width = 7,
    .height = 13,
    .data = {
        0xd8,
        0xb1,
        0xe2,
        0xc1,
        0x83,
        0x06,
        0x0c,
        0x18,
        0x30,
        0x70,
        0xd0,
        0xc0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b985 = {
    .width = 6,
    .height = 11,
    .data = {
        0x7b,
        0x3c,
        0xc3,
        0x0c,
        0x30,
        0xc3,
        0x0c,
        0x30,
        0xc0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b986 = {
    .width = 7,
    .height = 11,
    .data = {
        0x6d,
        0xaf,
        0x1d,
        0x3c,
        0x60,
        0xc1,
        0x83,
        0x06,
        0x0c,
        0x18,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b987 = {
    .width = 6,
    .height = 5,
    .data = {
        0x0d,
        0xec,
        0x3b,
        0x5c,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b988 = {
    .width = 2,
    .height = 2,
    .data = {
        0xf0,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b989 = {
    .width = 6,
    .height = 4,
    .data = {
        0xcf,
        0x35,
        0xbc,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b98a = {
    .width = 7,
    .height = 3,
    .data = {
        0x73,
        0xd7,
        0x70,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b98b = {
    .width = 4,
    .height = 3,
    .data = {
        0x6f,
        0x60,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b98c = {
    .width = 4,
    .height = 4,
    .data = {
        0x16,
        0xa4,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b98d = {
    .width = 3,
    .height = 3,
    .data = {
        0x55,
        0x00,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b98e = {
    .width = 3,
    .height = 5,
    .data = {
        0xf3,
        0x4e,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b98f = {
    .width = 7,
    .height = 7,
    .data = {
        0x38,
        0x8a,
        0xee,
        0x3c,
        0x6f,
        0x8e,
        0x00,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b990 = {
    .width = 7,
    .height = 6,
    .data = {
        0x39,
        0x8f,
        0x1e,
        0x3c,
        0x67,
        0x00,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b991 = {
    .width = 8,
    .height = 6,
    .data = {
        0x3c,
        0x66,
        0xc3,
        0xdb,
        0xdb,
        0x76,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b992 = {
    .width = 8,
    .height = 8,
    .data = {
        0xc0,
        0xc0,
        0xcb,
        0xd7,
        0xdb,
        0xdb,
        0xc3,
        0xff,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b993 = {
    .width = 9,
    .height = 6,
    .data = {
        0x7b,
        0x66,
        0xf3,
        0x7d,
        0xbd,
        0xdb,
        0x6c,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b994 = {
    .width = 10,
    .height = 8,
    .data = {
        0x00,
        0xc0,
        0x63,
        0xf3,
        0xa0,
        0xd4,
        0x36,
        0x0e,
        0xf1,
        0xfe,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b995 = {
    .width = 10,
    .height = 8,
    .data = {
        0x04,
        0xc2,
        0xa3,
        0xf3,
        0xa0,
        0xd4,
        0x36,
        0x0e,
        0x61,
        0xfc,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b996 = {
    .width = 8,
    .height = 8,
    .data = {
        0xc0,
        0x40,
        0x7e,
        0x63,
        0x03,
        0x23,
        0x57,
        0x3e,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b997 = {
    .width = 10,
    .height = 8,
    .data = {
        0x00,
        0xc0,
        0x36,
        0xcf,
        0x5b,
        0xd6,
        0xf1,
        0xba,
        0x79,
        0x1c,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b998 = {
    .width = 9,
    .height = 8,
    .data = {
        0x01,
        0x80,
        0xdf,
        0xdc,
        0x0c,
        0x06,
        0x93,
        0xf4,
        0x9c,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b999 = {
    .width = 9,
    .height = 8,
    .data = {
        0x01,
        0x80,
        0xdf,
        0x79,
        0xfc,
        0xc7,
        0x33,
        0x5c,
        0xc7,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b99a = {
    .width = 9,
    .height = 8,
    .data = {
        0x6d,
        0xdf,
        0xdb,
        0x61,
        0xb0,
        0xd8,
        0x6c,
        0x36,
        0x1b,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b99b = {
    .width = 12,
    .height = 7,
    .data = {
        0x70,
        0x0c,
        0x80,
        0xbd,
        0x8a,
        0xef,
        0xb5,
        0x8c,
        0xc0,
        0x78,
        0x00,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b99c = {
    .width = 12,
    .height = 16,
    .data = {
        0xff,
        0xf8,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x1f,
        0xff,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b99d = {
    .width = 12,
    .height = 16,
    .data = {
        0xff,
        0xf8,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x1f,
        0xff,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b99e = {
    .width = 12,
    .height = 16,
    .data = {
        0xff,
        0xf8,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x1f,
        0xff,
    }
};

static CONST_PREFIX dw_font_bitmap_t symbol_e0b99f = {
    .width = 12,
    .height = 16,
    .data = {
        0xff,
        0xf8,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x18,
        0x01,
        0x80,
        0x1f,
        0xff,
    }
};

const dw_font_info_t font_th_sarabun_new_bold20 = {
    .count = 192,
    .font_size = 20,
    .height = 22,
    .symbols = {
        {.utf8=0x20, .offset_x=0, .offset_y=0, .cur_dist=5, .bitmap=&symbol_20},
        {.utf8=0x21, .offset_x=1, .offset_y=-10, .cur_dist=4, .bitmap=&symbol_21},
        {.utf8=0x22, .offset_x=0, .offset_y=-11, .cur_dist=6, .bitmap=&symbol_22},
        {.utf8=0x23, .offset_x=0, .offset_y=-10, .cur_dist=9, .bitmap=&symbol_23},
        {.utf8=0x24, .offset_x=0, .offset_y=-11, .cur_dist=7, .bitmap=&symbol_24},
        {.utf8=0x25, .offset_x=1, .offset_y=-10, .cur_dist=14, .bitmap=&symbol_25},
        {.utf8=0x26, .offset_x=1, .offset_y=-10, .cur_dist=10, .bitmap=&symbol_26},
        {.utf8=0x27, .offset_x=0, .offset_y=-11, .cur_dist=3, .bitmap=&symbol_27},
        {.utf8=0x28, .offset_x=1, .offset_y=-11, .cur_dist=5, .bitmap=&symbol_28},
        {.utf8=0x29, .offset_x=-1, .offset_y=-11, .cur_dist=5, .bitmap=&symbol_29},
        {.utf8=0x2a, .offset_x=1, .offset_y=-10, .cur_dist=7, .bitmap=&symbol_2a},
        {.utf8=0x2b, .offset_x=1, .offset_y=-7, .cur_dist=8, .bitmap=&symbol_2b},
        {.utf8=0x2c, .offset_x=0, .offset_y=-1, .cur_dist=3, .bitmap=&symbol_2c},
        {.utf8=0x2d, .offset_x=0, .offset_y=-5, .cur_dist=5, .bitmap=&symbol_2d},
        {.utf8=0x2e, .offset_x=1, .offset_y=-1, .cur_dist=3, .bitmap=&symbol_2e},
        {.utf8=0x2f, .offset_x=-2, .offset_y=-10, .cur_dist=6, .bitmap=&symbol_2f},
        {.utf8=0x30, .offset_x=1, .offset_y=-10, .cur_dist=8, .bitmap=&symbol_30},
        {.utf8=0x31, .offset_x=2, .offset_y=-10, .cur_dist=8, .bitmap=&symbol_31},
        {.utf8=0x32, .offset_x=0, .offset_y=-10, .cur_dist=9, .bitmap=&symbol_32},
        {.utf8=0x33, .offset_x=0, .offset_y=-10, .cur_dist=9, .bitmap=&symbol_33},
        {.utf8=0x34, .offset_x=0, .offset_y=-11, .cur_dist=9, .bitmap=&symbol_34},
        {.utf8=0x35, .offset_x=-1, .offset_y=-10, .cur_dist=8, .bitmap=&symbol_35},
        {.utf8=0x36, .offset_x=1, .offset_y=-10, .cur_dist=8, .bitmap=&symbol_36},
        {.utf8=0x37, .offset_x=0, .offset_y=-10, .cur_dist=8, .bitmap=&symbol_37},
        {.utf8=0x38, .offset_x=1, .offset_y=-10, .cur_dist=8, .bitmap=&symbol_38},
        {.utf8=0x39, .offset_x=1, .offset_y=-10, .cur_dist=8, .bitmap=&symbol_39},
        {.utf8=0x3a, .offset_x=1, .offset_y=-6, .cur_dist=4, .bitmap=&symbol_3a},
        {.utf8=0x3b, .offset_x=0, .offset_y=-6, .cur_dist=4, .bitmap=&symbol_3b},
        {.utf8=0x3c, .offset_x=1, .offset_y=-9, .cur_dist=9, .bitmap=&symbol_3c},
        {.utf8=0x3d, .offset_x=0, .offset_y=-6, .cur_dist=8, .bitmap=&symbol_3d},
        {.utf8=0x3e, .offset_x=1, .offset_y=-9, .cur_dist=8, .bitmap=&symbol_3e},
        {.utf8=0x3f, .offset_x=-1, .offset_y=-10, .cur_dist=6, .bitmap=&symbol_3f},
        {.utf8=0x40, .offset_x=1, .offset_y=-8, .cur_dist=11, .bitmap=&symbol_40},
        {.utf8=0x41, .offset_x=0, .offset_y=-10, .cur_dist=9, .bitmap=&symbol_41},
        {.utf8=0x42, .offset_x=1, .offset_y=-10, .cur_dist=9, .bitmap=&symbol_42},
        {.utf8=0x43, .offset_x=0, .offset_y=-10, .cur_dist=9, .bitmap=&symbol_43},
        {.utf8=0x44, .offset_x=1, .offset_y=-10, .cur_dist=9, .bitmap=&symbol_44},
        {.utf8=0x45, .offset_x=1, .offset_y=-10, .cur_dist=7, .bitmap=&symbol_45},
        {.utf8=0x46, .offset_x=1, .offset_y=-10, .cur_dist=7, .bitmap=&symbol_46},
        {.utf8=0x47, .offset_x=0, .offset_y=-10, .cur_dist=9, .bitmap=&symbol_47},
        {.utf8=0x48, .offset_x=1, .offset_y=-10, .cur_dist=9, .bitmap=&symbol_48},
        {.utf8=0x49, .offset_x=1, .offset_y=-10, .cur_dist=4, .bitmap=&symbol_49},
        {.utf8=0x4a, .offset_x=0, .offset_y=-10, .cur_dist=7, .bitmap=&symbol_4a},
        {.utf8=0x4b, .offset_x=1, .offset_y=-10, .cur_dist=9, .bitmap=&symbol_4b},
        {.utf8=0x4c, .offset_x=1, .offset_y=-10, .cur_dist=8, .bitmap=&symbol_4c},
        {.utf8=0x4d, .offset_x=-1, .offset_y=-10, .cur_dist=12, .bitmap=&symbol_4d},
        {.utf8=0x4e, .offset_x=1, .offset_y=-10, .cur_dist=9, .bitmap=&symbol_4e},
        {.utf8=0x4f, .offset_x=1, .offset_y=-10, .cur_dist=10, .bitmap=&symbol_4f},
        {.utf8=0x50, .offset_x=1, .offset_y=-10, .cur_dist=8, .bitmap=&symbol_50},
        {.utf8=0x51, .offset_x=1, .offset_y=-10, .cur_dist=10, .bitmap=&symbol_51},
        {.utf8=0x52, .offset_x=1, .offset_y=-10, .cur_dist=8, .bitmap=&symbol_52},
        {.utf8=0x53, .offset_x=0, .offset_y=-10, .cur_dist=7, .bitmap=&symbol_53},
        {.utf8=0x54, .offset_x=0, .offset_y=-10, .cur_dist=9, .bitmap=&symbol_54},
        {.utf8=0x55, .offset_x=1, .offset_y=-10, .cur_dist=10, .bitmap=&symbol_55},
        {.utf8=0x56, .offset_x=0, .offset_y=-10, .cur_dist=10, .bitmap=&symbol_56},
        {.utf8=0x57, .offset_x=-1, .offset_y=-10, .cur_dist=12, .bitmap=&symbol_57},
        {.utf8=0x58, .offset_x=0, .offset_y=-10, .cur_dist=9, .bitmap=&symbol_58},
        {.utf8=0x59, .offset_x=0, .offset_y=-10, .cur_dist=8, .bitmap=&symbol_59},
        {.utf8=0x5a, .offset_x=1, .offset_y=-10, .cur_dist=9, .bitmap=&symbol_5a},
        {.utf8=0x5b, .offset_x=1, .offset_y=-11, .cur_dist=5, .bitmap=&symbol_5b},
        {.utf8=0x5c, .offset_x=0, .offset_y=-10, .cur_dist=5, .bitmap=&symbol_5c},
        {.utf8=0x5d, .offset_x=1, .offset_y=-11, .cur_dist=5, .bitmap=&symbol_5d},
        {.utf8=0x5e, .offset_x=0, .offset_y=-10, .cur_dist=8, .bitmap=&symbol_5e},
        {.utf8=0x5f, .offset_x=0, .offset_y=1, .cur_dist=8, .bitmap=&symbol_5f},
        {.utf8=0x60, .offset_x=1, .offset_y=-10, .cur_dist=4, .bitmap=&symbol_60},
        {.utf8=0x61, .offset_x=0, .offset_y=-7, .cur_dist=7, .bitmap=&symbol_61},
        {.utf8=0x62, .offset_x=1, .offset_y=-10, .cur_dist=9, .bitmap=&symbol_62},
        {.utf8=0x63, .offset_x=1, .offset_y=-7, .cur_dist=7, .bitmap=&symbol_63},
        {.utf8=0x64, .offset_x=1, .offset_y=-10, .cur_dist=9, .bitmap=&symbol_64},
        {.utf8=0x65, .offset_x=1, .offset_y=-7, .cur_dist=8, .bitmap=&symbol_65},
        {.utf8=0x66, .offset_x=0, .offset_y=-10, .cur_dist=5, .bitmap=&symbol_66},
        {.utf8=0x67, .offset_x=1, .offset_y=-7, .cur_dist=7, .bitmap=&symbol_67},
        {.utf8=0x68, .offset_x=1, .offset_y=-10, .cur_dist=8, .bitmap=&symbol_68},
        {.utf8=0x69, .offset_x=1, .offset_y=-9, .cur_dist=4, .bitmap=&symbol_69},
        {.utf8=0x6a, .offset_x=-2, .offset_y=-9, .cur_dist=4, .bitmap=&symbol_6a},
        {.utf8=0x6b, .offset_x=1, .offset_y=-10, .cur_dist=7, .bitmap=&symbol_6b},
        {.utf8=0x6c, .offset_x=0, .offset_y=-10, .cur_dist=4, .bitmap=&symbol_6c},
        {.utf8=0x6d, .offset_x=0, .offset_y=-7, .cur_dist=13, .bitmap=&symbol_6d},
        {.utf8=0x6e, .offset_x=0, .offset_y=-7, .cur_dist=8, .bitmap=&symbol_6e},
        {.utf8=0x6f, .offset_x=1, .offset_y=-7, .cur_dist=8, .bitmap=&symbol_6f},
        {.utf8=0x70, .offset_x=1, .offset_y=-7, .cur_dist=9, .bitmap=&symbol_70},
        {.utf8=0x71, .offset_x=1, .offset_y=-7, .cur_dist=9, .bitmap=&symbol_71},
        {.utf8=0x72, .offset_x=0, .offset_y=-7, .cur_dist=5, .bitmap=&symbol_72},
        {.utf8=0x73, .offset_x=0, .offset_y=-7, .cur_dist=6, .bitmap=&symbol_73},
        {.utf8=0x74, .offset_x=0, .offset_y=-9, .cur_dist=5, .bitmap=&symbol_74},
        {.utf8=0x75, .offset_x=1, .offset_y=-7, .cur_dist=8, .bitmap=&symbol_75},
        {.utf8=0x76, .offset_x=-1, .offset_y=-7, .cur_dist=7, .bitmap=&symbol_76},
        {.utf8=0x77, .offset_x=0, .offset_y=-7, .cur_dist=10, .bitmap=&symbol_77},
        {.utf8=0x78, .offset_x=0, .offset_y=-7, .cur_dist=7, .bitmap=&symbol_78},
        {.utf8=0x79, .offset_x=0, .offset_y=-7, .cur_dist=7, .bitmap=&symbol_79},
        {.utf8=0x7a, .offset_x=0, .offset_y=-7, .cur_dist=7, .bitmap=&symbol_7a},
        {.utf8=0x7b, .offset_x=1, .offset_y=-10, .cur_dist=5, .bitmap=&symbol_7b},
        {.utf8=0x7c, .offset_x=1, .offset_y=-11, .cur_dist=4, .bitmap=&symbol_7c},
        {.utf8=0x7d, .offset_x=1, .offset_y=-10, .cur_dist=5, .bitmap=&symbol_7d},
        {.utf8=0x7e, .offset_x=0, .offset_y=-5, .cur_dist=8, .bitmap=&symbol_7e},
        {.utf8=0x7f, .offset_x=1, .offset_y=-16, .cur_dist=14, .bitmap=&symbol_7f},
        {.utf8=0xe0b880, .offset_x=0, .offset_y=0, .cur_dist=0, .bitmap=&symbol_e0b880},
        {.utf8=0xe0b881, .offset_x=1, .offset_y=-8, .cur_dist=9, .bitmap=&symbol_e0b881},
        {.utf8=0xe0b882, .offset_x=0, .offset_y=-8, .cur_dist=9, .bitmap=&symbol_e0b882},
        {.utf8=0xe0b883, .offset_x=0, .offset_y=-8, .cur_dist=9, .bitmap=&symbol_e0b883},
        {.utf8=0xe0b884, .offset_x=1, .offset_y=-8, .cur_dist=10, .bitmap=&symbol_e0b884},
        {.utf8=0xe0b885, .offset_x=1, .offset_y=-8, .cur_dist=8, .bitmap=&symbol_e0b885},
        {.utf8=0xe0b886, .offset_x=1, .offset_y=-8, .cur_dist=11, .bitmap=&symbol_e0b886},
        {.utf8=0xe0b887, .offset_x=0, .offset_y=-8, .cur_dist=7, .bitmap=&symbol_e0b887},
        {.utf8=0xe0b888, .offset_x=1, .offset_y=-8, .cur_dist=9, .bitmap=&symbol_e0b888},
        {.utf8=0xe0b889, .offset_x=1, .offset_y=-8, .cur_dist=10, .bitmap=&symbol_e0b889},
        {.utf8=0xe0b88a, .offset_x=1, .offset_y=-8, .cur_dist=10, .bitmap=&symbol_e0b88a},
        {.utf8=0xe0b88b, .offset_x=1, .offset_y=-8, .cur_dist=10, .bitmap=&symbol_e0b88b},
        {.utf8=0xe0b88c, .offset_x=1, .offset_y=-8, .cur_dist=12, .bitmap=&symbol_e0b88c},
        {.utf8=0xe0b88d, .offset_x=1, .offset_y=-8, .cur_dist=12, .bitmap=&symbol_e0b88d},
        {.utf8=0xe0b88e, .offset_x=1, .offset_y=-8, .cur_dist=10, .bitmap=&symbol_e0b88e},
        {.utf8=0xe0b88f, .offset_x=1, .offset_y=-8, .cur_dist=10, .bitmap=&symbol_e0b88f},
        {.utf8=0xe0b890, .offset_x=0, .offset_y=-8, .cur_dist=8, .bitmap=&symbol_e0b890},
        {.utf8=0xe0b891, .offset_x=1, .offset_y=-8, .cur_dist=12, .bitmap=&symbol_e0b891},
        {.utf8=0xe0b892, .offset_x=1, .offset_y=-8, .cur_dist=12, .bitmap=&symbol_e0b892},
        {.utf8=0xe0b893, .offset_x=0, .offset_y=-8, .cur_dist=12, .bitmap=&symbol_e0b893},
        {.utf8=0xe0b894, .offset_x=1, .offset_y=-8, .cur_dist=9, .bitmap=&symbol_e0b894},
        {.utf8=0xe0b895, .offset_x=1, .offset_y=-8, .cur_dist=9, .bitmap=&symbol_e0b895},
        {.utf8=0xe0b896, .offset_x=0, .offset_y=-8, .cur_dist=9, .bitmap=&symbol_e0b896},
        {.utf8=0xe0b897, .offset_x=0, .offset_y=-9, .cur_dist=10, .bitmap=&symbol_e0b897},
        {.utf8=0xe0b898, .offset_x=1, .offset_y=-8, .cur_dist=9, .bitmap=&symbol_e0b898},
        {.utf8=0xe0b899, .offset_x=0, .offset_y=-8, .cur_dist=10, .bitmap=&symbol_e0b899},
        {.utf8=0xe0b89a, .offset_x=0, .offset_y=-8, .cur_dist=10, .bitmap=&symbol_e0b89a},
        {.utf8=0xe0b89b, .offset_x=0, .offset_y=-11, .cur_dist=10, .bitmap=&symbol_e0b89b},
        {.utf8=0xe0b89c, .offset_x=1, .offset_y=-8, .cur_dist=9, .bitmap=&symbol_e0b89c},
        {.utf8=0xe0b89d, .offset_x=1, .offset_y=-11, .cur_dist=9, .bitmap=&symbol_e0b89d},
        {.utf8=0xe0b89e, .offset_x=0, .offset_y=-8, .cur_dist=10, .bitmap=&symbol_e0b89e},
        {.utf8=0xe0b89f, .offset_x=0, .offset_y=-11, .cur_dist=10, .bitmap=&symbol_e0b89f},
        {.utf8=0xe0b8a0, .offset_x=0, .offset_y=-8, .cur_dist=9, .bitmap=&symbol_e0b8a0},
        {.utf8=0xe0b8a1, .offset_x=0, .offset_y=-8, .cur_dist=9, .bitmap=&symbol_e0b8a1},
        {.utf8=0xe0b8a2, .offset_x=1, .offset_y=-8, .cur_dist=9, .bitmap=&symbol_e0b8a2},
        {.utf8=0xe0b8a3, .offset_x=1, .offset_y=-8, .cur_dist=8, .bitmap=&symbol_e0b8a3},
        {.utf8=0xe0b8a4, .offset_x=0, .offset_y=-8, .cur_dist=9, .bitmap=&symbol_e0b8a4},
        {.utf8=0xe0b8a5, .offset_x=0, .offset_y=-8, .cur_dist=9, .bitmap=&symbol_e0b8a5},
        {.utf8=0xe0b8a6, .offset_x=1, .offset_y=-8, .cur_dist=10, .bitmap=&symbol_e0b8a6},
        {.utf8=0xe0b8a7, .offset_x=0, .offset_y=-8, .cur_dist=8, .bitmap=&symbol_e0b8a7},
        {.utf8=0xe0b8a8, .offset_x=1, .offset_y=-9, .cur_dist=10, .bitmap=&symbol_e0b8a8},
        {.utf8=0xe0b8a9, .offset_x=0, .offset_y=-8, .cur_dist=10, .bitmap=&symbol_e0b8a9},
        {.utf8=0xe0b8aa, .offset_x=0, .offset_y=-9, .cur_dist=9, .bitmap=&symbol_e0b8aa},
        {.utf8=0xe0b8ab, .offset_x=0, .offset_y=-8, .cur_dist=10, .bitmap=&symbol_e0b8ab},
        {.utf8=0xe0b8ac, .offset_x=0, .offset_y=-9, .cur_dist=10, .bitmap=&symbol_e0b8ac},
        {.utf8=0xe0b8ad, .offset_x=0, .offset_y=-8, .cur_dist=9, .bitmap=&symbol_e0b8ad},
        {.utf8=0xe0b8ae, .offset_x=1, .offset_y=-9, .cur_dist=9, .bitmap=&symbol_e0b8ae},
        {.utf8=0xe0b8af, .offset_x=0, .offset_y=-8, .cur_dist=8, .bitmap=&symbol_e0b8af},
        {.utf8=0xe0b8b0, .offset_x=0, .offset_y=-8, .cur_dist=8, .bitmap=&symbol_e0b8b0},
        {.utf8=0xe0b8b1, .offset_x=-5, .offset_y=-13, .cur_dist=0, .bitmap=&symbol_e0b8b1},
        {.utf8=0xe0b8b2, .offset_x=0, .offset_y=-8, .cur_dist=7, .bitmap=&symbol_e0b8b2},
        {.utf8=0xe0b8b3, .offset_x=-3, .offset_y=-12, .cur_dist=7, .bitmap=&symbol_e0b8b3},
        {.utf8=0xe0b8b4, .offset_x=-7, .offset_y=-13, .cur_dist=0, .bitmap=&symbol_e0b8b4},
        {.utf8=0xe0b8b5, .offset_x=-7, .offset_y=-14, .cur_dist=0, .bitmap=&symbol_e0b8b5},
        {.utf8=0xe0b8b6, .offset_x=-7, .offset_y=-14, .cur_dist=0, .bitmap=&symbol_e0b8b6},
        {.utf8=0xe0b8b7, .offset_x=-7, .offset_y=-14, .cur_dist=0, .bitmap=&symbol_e0b8b7},
        {.utf8=0xe0b8b8, .offset_x=-4, .offset_y=1, .cur_dist=0, .bitmap=&symbol_e0b8b8},
        {.utf8=0xe0b8b9, .offset_x=-7, .offset_y=1, .cur_dist=0, .bitmap=&symbol_e0b8b9},
        {.utf8=0xe0b8ba, .offset_x=-2, .offset_y=1, .cur_dist=0, .bitmap=&symbol_e0b8ba},
        {.utf8=0xe0b8bb, .offset_x=1, .offset_y=-16, .cur_dist=14, .bitmap=&symbol_e0b8bb},
        {.utf8=0xe0b8bc, .offset_x=1, .offset_y=-16, .cur_dist=14, .bitmap=&symbol_e0b8bc},
        {.utf8=0xe0b8bd, .offset_x=1, .offset_y=-16, .cur_dist=14, .bitmap=&symbol_e0b8bd},
        {.utf8=0xe0b8be, .offset_x=1, .offset_y=-16, .cur_dist=14, .bitmap=&symbol_e0b8be},
        {.utf8=0xe0b8bf, .offset_x=1, .offset_y=-10, .cur_dist=7, .bitmap=&symbol_e0b8bf},
        {.utf8=0xe0b980, .offset_x=1, .offset_y=-8, .cur_dist=6, .bitmap=&symbol_e0b980},
        {.utf8=0xe0b981, .offset_x=1, .offset_y=-8, .cur_dist=10, .bitmap=&symbol_e0b981},
        {.utf8=0xe0b982, .offset_x=-1, .offset_y=-13, .cur_dist=7, .bitmap=&symbol_e0b982},
        {.utf8=0xe0b983, .offset_x=-1, .offset_y=-13, .cur_dist=7, .bitmap=&symbol_e0b983},
        {.utf8=0xe0b984, .offset_x=-1, .offset_y=-13, .cur_dist=7, .bitmap=&symbol_e0b984},
        {.utf8=0xe0b985, .offset_x=-3, .offset_y=-8, .cur_dist=4, .bitmap=&symbol_e0b985},
        {.utf8=0xe0b986, .offset_x=1, .offset_y=-8, .cur_dist=9, .bitmap=&symbol_e0b986},
        {.utf8=0xe0b987, .offset_x=-7, .offset_y=-14, .cur_dist=0, .bitmap=&symbol_e0b987},
        {.utf8=0xe0b988, .offset_x=-3, .offset_y=-17, .cur_dist=0, .bitmap=&symbol_e0b988},
        {.utf8=0xe0b989, .offset_x=-5, .offset_y=-18, .cur_dist=0, .bitmap=&symbol_e0b989},
        {.utf8=0xe0b98a, .offset_x=-6, .offset_y=-17, .cur_dist=0, .bitmap=&symbol_e0b98a},
        {.utf8=0xe0b98b, .offset_x=-4, .offset_y=-17, .cur_dist=0, .bitmap=&symbol_e0b98b},
        {.utf8=0xe0b98c, .offset_x=-4, .offset_y=-17, .cur_dist=0, .bitmap=&symbol_e0b98c},
        {.utf8=0xe0b98d, .offset_x=-4, .offset_y=-12, .cur_dist=0, .bitmap=&symbol_e0b98d},
        {.utf8=0xe0b98e, .offset_x=-4, .offset_y=-14, .cur_dist=0, .bitmap=&symbol_e0b98e},
        {.utf8=0xe0b98f, .offset_x=1, .offset_y=-7, .cur_dist=9, .bitmap=&symbol_e0b98f},
        {.utf8=0xe0b990, .offset_x=1, .offset_y=-6, .cur_dist=9, .bitmap=&symbol_e0b990},
        {.utf8=0xe0b991, .offset_x=1, .offset_y=-6, .cur_dist=10, .bitmap=&symbol_e0b991},
        {.utf8=0xe0b992, .offset_x=0, .offset_y=-8, .cur_dist=9, .bitmap=&symbol_e0b992},
        {.utf8=0xe0b993, .offset_x=0, .offset_y=-7, .cur_dist=10, .bitmap=&symbol_e0b993},
        {.utf8=0xe0b994, .offset_x=0, .offset_y=-8, .cur_dist=9, .bitmap=&symbol_e0b994},
        {.utf8=0xe0b995, .offset_x=0, .offset_y=-8, .cur_dist=9, .bitmap=&symbol_e0b995},
        {.utf8=0xe0b996, .offset_x=-1, .offset_y=-8, .cur_dist=9, .bitmap=&symbol_e0b996},
        {.utf8=0xe0b997, .offset_x=0, .offset_y=-8, .cur_dist=11, .bitmap=&symbol_e0b997},
        {.utf8=0xe0b998, .offset_x=1, .offset_y=-8, .cur_dist=11, .bitmap=&symbol_e0b998},
        {.utf8=0xe0b999, .offset_x=1, .offset_y=-8, .cur_dist=11, .bitmap=&symbol_e0b999},
        {.utf8=0xe0b99a, .offset_x=0, .offset_y=-8, .cur_dist=11, .bitmap=&symbol_e0b99a},
        {.utf8=0xe0b99b, .offset_x=1, .offset_y=-7, .cur_dist=14, .bitmap=&symbol_e0b99b},
        {.utf8=0xe0b99c, .offset_x=1, .offset_y=-16, .cur_dist=14, .bitmap=&symbol_e0b99c},
        {.utf8=0xe0b99d, .offset_x=1, .offset_y=-16, .cur_dist=14, .bitmap=&symbol_e0b99d},
        {.utf8=0xe0b99e, .offset_x=1, .offset_y=-16, .cur_dist=14, .bitmap=&symbol_e0b99e},
        {.utf8=0xe0b99f, .offset_x=1, .offset_y=-16, .cur_dist=14, .bitmap=&symbol_e0b99f},
    }
};

