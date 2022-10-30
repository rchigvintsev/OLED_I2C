#if defined(__AVR__)
	#include <avr/pgmspace.h>
	#define fontdatatype const uint8_t
#elif defined(__PIC32MX__)
	#define PROGMEM
	#define fontdatatype const unsigned char
#elif defined(__arm__)
	#define PROGMEM
	#define fontdatatype const unsigned char
#endif

fontdatatype RusFont[] PROGMEM =
{
0x06, 0x08, 0x20, 0x5f,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   // sp
0x00, 0x00, 0x00, 0x2f, 0x00, 0x00,   // !
0x00, 0x00, 0x07, 0x00, 0x07, 0x00,   // "
0x00, 0x14, 0x7f, 0x14, 0x7f, 0x14,   // #
0x00, 0x24, 0x2a, 0x7f, 0x2a, 0x12,   // $
0x00, 0x23, 0x13, 0x08, 0x64, 0x62,   // %
0x00, 0x36, 0x49, 0x55, 0x22, 0x50,   // &
0x00, 0x00, 0x05, 0x03, 0x00, 0x00,   // '
0x00, 0x00, 0x1c, 0x22, 0x41, 0x00,   // (
0x00, 0x00, 0x41, 0x22, 0x1c, 0x00,   // )
0x00, 0x14, 0x08, 0x3E, 0x08, 0x14,   // *
0x00, 0x08, 0x08, 0x3E, 0x08, 0x08,   // +
0x00, 0x3E, 0x49, 0x45, 0x45, 0x38,   // ,
0x00, 0x08, 0x08, 0x08, 0x08, 0x08,   // -
0x00, 0x7C, 0x10, 0x38, 0x44, 0x38,   // .
0x00, 0x20, 0x10, 0x08, 0x04, 0x02,   // /

0x00, 0x3E, 0x51, 0x49, 0x45, 0x3E,   // 0
0x00, 0x00, 0x42, 0x7F, 0x40, 0x00,   // 1
0x00, 0x42, 0x61, 0x51, 0x49, 0x46,   // 2
0x00, 0x21, 0x41, 0x45, 0x4B, 0x31,   // 3
0x00, 0x18, 0x14, 0x12, 0x7F, 0x10,   // 4
0x00, 0x27, 0x45, 0x45, 0x45, 0x39,   // 5
0x00, 0x3C, 0x4A, 0x49, 0x49, 0x30,   // 6
0x00, 0x01, 0x71, 0x09, 0x05, 0x03,   // 7
0x00, 0x36, 0x49, 0x49, 0x49, 0x36,   // 8
0x00, 0x06, 0x49, 0x49, 0x29, 0x1E,   // 9
0x00, 0x73, 0x0C, 0x7F, 0x0C, 0x73,   // :
0x00, 0x4C, 0x30, 0x7C, 0x30, 0x4C,   // ;
0x00, 0x7F, 0x49, 0x49, 0x49, 0x31,   // <
0x00, 0x14, 0x14, 0x14, 0x14, 0x14,   // =
0x00, 0x7F, 0x10, 0x3E, 0x41, 0x3E,   // >
0x00, 0x02, 0x01, 0x51, 0x09, 0x06,   // ?

0x00, 0x32, 0x49, 0x59, 0x51, 0x3E,   // @
0x00, 0x1C, 0x22, 0x7F, 0x22, 0x1C,   // A
0x00, 0x7F, 0x10, 0x08, 0x04, 0x7F,   // B
0x00, 0x3E, 0x41, 0x41, 0x41, 0x22,   // C
0x00, 0x7F, 0x45, 0x45, 0x45, 0x3A,   // D
0x00, 0x61, 0x26, 0x18, 0x06, 0x01,   // E
0x00, 0x7C, 0x12, 0x11, 0x12, 0x7C,   // F
0x00, 0x7F, 0x01, 0x01, 0x01, 0x7F,   // G
0x00, 0x7F, 0x09, 0x09, 0x09, 0x06,   // H
0x00, 0x7F, 0x40, 0x7F, 0x40, 0x7F,   // I
0x00, 0x3E, 0x41, 0x41, 0x41, 0x3E,   // J
0x00, 0x40, 0x3F, 0x01, 0x01, 0x7F,   // K
0x00, 0x60, 0x3F, 0x21, 0x3F, 0x60,   // L
0x00, 0x7F, 0x48, 0x48, 0x30, 0x00,   // M
0x00, 0x03, 0x01, 0x7F, 0x01, 0x03,   // N
0x00, 0x3F, 0x20, 0x3F, 0x20, 0x7F,   // O

0x00, 0x21, 0x41, 0x49, 0x4D, 0x33,   // P
0x00, 0x7E, 0x20, 0x11, 0x08, 0x7E,   // Q
0x00, 0x7F, 0x08, 0x14, 0x22, 0x41,   // R
0x00, 0x7F, 0x48, 0x78, 0x00, 0x7F,   // S
0x00, 0x7F, 0x49, 0x49, 0x49, 0x41,   // T
0x00, 0x7F, 0x01, 0x01, 0x01, 0x03,   // U
0x00, 0x7F, 0x06, 0x08, 0x06, 0x7F,   // V
0x00, 0x3F, 0x20, 0x20, 0x3F, 0x60,   // W
0x00, 0x07, 0x08, 0x08, 0x08, 0x7F,   // X
0x00, 0x7F, 0x08, 0x08, 0x08, 0x7F,   // Y
0x00, 0x66, 0x19, 0x09, 0x09, 0x7F,   // Z
0x00, 0x44, 0x28, 0x10, 0x28, 0x44,   // [
0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55,   // Backslash (Checker pattern)
0x00, 0x04, 0x7C, 0x50, 0x70, 0x00,   // ]
0x00, 0x04, 0x02, 0x01, 0x02, 0x04,   // ^
0x00, 0x40, 0x40, 0x40, 0x40, 0x40,   // _

0x00, 0x42, 0x42, 0x52, 0x52, 0x3C,   // `
0x00, 0x18, 0x24, 0x7E, 0x24, 0x18,   // a
0x00, 0x7C, 0x20, 0x10, 0x7C, 0x00,   // b
0x00, 0x38, 0x44, 0x44, 0x44, 0x28,   // c
0x00, 0x7E, 0x4A, 0x4A, 0x34, 0x00,   // d
0x00, 0x4C, 0x90, 0x90, 0x90, 0x7C,   // e
0x00, 0x20, 0x54, 0x54, 0x78, 0x40,   // f
0x00, 0x7C, 0x04, 0x04, 0x7C, 0x00,   // g
0x00, 0xFC, 0x18, 0x24, 0x24, 0x18,   // h
0x00, 0x7C, 0x40, 0x7C, 0x40, 0x7C,   // i
0x00, 0x38, 0x44, 0x44, 0x44, 0x38,   // j
0x00, 0x40, 0x3C, 0x04, 0x04, 0x7C,   // k
0x00, 0x38, 0x45, 0x45, 0x49, 0x3E,   // l
0x00, 0x7C, 0x50, 0x70, 0x00, 0x00,   // m   ~
0x00, 0x04, 0x04, 0x7C, 0x04, 0x04,   // n
0x00, 0x3C, 0x20, 0x3C, 0x20, 0x7C,   // o

0x00, 0x24, 0x42, 0x4A, 0x34, 0x00,   // p
0x00, 0x7C, 0x21, 0x11, 0x7C, 0x00,   // q
0x00, 0x7C, 0x10, 0x28, 0x44, 0x00,   // r
0x00, 0x7C, 0x50, 0x70, 0x00, 0x7C,   // s
0x00, 0x38, 0x54, 0x54, 0x54, 0x18,   // t
0x00, 0x7C, 0x04, 0x04, 0x0C, 0x00,   // u
0x00, 0x7C, 0x08, 0x10, 0x08, 0x7C,   // v
0x00, 0x3C, 0x20, 0x20, 0x3C, 0x60,   // w
0x00, 0x1C, 0x10, 0x10, 0x7C, 0x00,   // x
0x00, 0x7C, 0x10, 0x10, 0x7C, 0x00,   // y
0x00, 0x40, 0x2C, 0x12, 0x7E, 0x00,   // z
0x00, 0x63, 0x14, 0x08, 0x14, 0x63,   // {
0x00, 0x00, 0x00, 0xFF, 0x00, 0x00,   // |
0x00, 0x01, 0x7F, 0x48, 0x48, 0x30,   // }
0x00, 0x41, 0x49, 0x49, 0x2A, 0x1C,    // ~ (Degrees)

};
