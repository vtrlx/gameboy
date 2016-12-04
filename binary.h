#ifndef __BINARY_H_INCLUDED__
#define __BINARY_H_INCLUDED__

#define __HEX(n) 0x##n##u
#define __BIN_8(bits) \
  ((bits & 0x00000001U) ? 0x01 : 0x00) \
| ((bits & 0x00000010U) ? 0x02 : 0x00) \
| ((bits & 0x00000100U) ? 0x04 : 0x00) \
| ((bits & 0x00001000U) ? 0x08 : 0x00) \
| ((bits & 0x00010000U) ? 0x10 : 0x00) \
| ((bits & 0x00100000U) ? 0x20 : 0x00) \
| ((bits & 0x01000000U) ? 0x40 : 0x00) \
| ((bits & 0x10000000U) ? 0x80 : 0x00)

#define BIN_8(bits)       ((uint8_t) __BIN_8(__HEX(bits)))
#define BIN_16(msb, lsb)  ((uint16_t) BIN_8(msb) << 8 + BIN_8(lsb))

#define B00000000 BIN_8(00000000)
#define B00000001 BIN_8(00000001)
#define B00000010 BIN_8(00000010)
#define B00000011 BIN_8(00000011)
#define B00000100 BIN_8(00000100)
#define B00000101 BIN_8(00000101)
#define B00000110 BIN_8(00000110)
#define B00000111 BIN_8(00000111)
#define B00001000 BIN_8(00001000)
#define B00001001 BIN_8(00001001)
#define B00001010 BIN_8(00001010)
#define B00001011 BIN_8(00001011)
#define B00001100 BIN_8(00001100)
#define B00001101 BIN_8(00001101)
#define B00001110 BIN_8(00001110)
#define B00001111 BIN_8(00001111)
#define B00010000 BIN_8(00010000)
#define B00010001 BIN_8(00010001)
#define B00010010 BIN_8(00010010)
#define B00010011 BIN_8(00010011)
#define B00010100 BIN_8(00010100)
#define B00010101 BIN_8(00010101)
#define B00010110 BIN_8(00010110)
#define B00010111 BIN_8(00010111)
#define B00011000 BIN_8(00011000)
#define B00011001 BIN_8(00011001)
#define B00011010 BIN_8(00011010)
#define B00011011 BIN_8(00011011)
#define B00011100 BIN_8(00011100)
#define B00011101 BIN_8(00011101)
#define B00011110 BIN_8(00011110)
#define B00011111 BIN_8(00011111)
#define B00100000 BIN_8(00100000)
#define B00100001 BIN_8(00100001)
#define B00100010 BIN_8(00100010)
#define B00100011 BIN_8(00100011)
#define B00100100 BIN_8(00100100)
#define B00100101 BIN_8(00100101)
#define B00100110 BIN_8(00100110)
#define B00100111 BIN_8(00100111)
#define B00101000 BIN_8(00101000)
#define B00101001 BIN_8(00101001)
#define B00101010 BIN_8(00101010)
#define B00101011 BIN_8(00101011)
#define B00101100 BIN_8(00101100)
#define B00101101 BIN_8(00101101)
#define B00101110 BIN_8(00101110)
#define B00101111 BIN_8(00101111)
#define B00110000 BIN_8(00110000)
#define B00110001 BIN_8(00110001)
#define B00110010 BIN_8(00110010)
#define B00110011 BIN_8(00110011)
#define B00110100 BIN_8(00110100)
#define B00110101 BIN_8(00110101)
#define B00110110 BIN_8(00110110)
#define B00110111 BIN_8(00110111)
#define B00111000 BIN_8(00111000)
#define B00111001 BIN_8(00111001)
#define B00111010 BIN_8(00111010)
#define B00111011 BIN_8(00111011)
#define B00111100 BIN_8(00111100)
#define B00111101 BIN_8(00111101)
#define B00111110 BIN_8(00111110)
#define B00111111 BIN_8(00111111)
#define B01000000 BIN_8(01000000)
#define B01000001 BIN_8(01000001)
#define B01000010 BIN_8(01000010)
#define B01000011 BIN_8(01000011)
#define B01000100 BIN_8(01000100)
#define B01000101 BIN_8(01000101)
#define B01000110 BIN_8(01000110)
#define B01000111 BIN_8(01000111)
#define B01001000 BIN_8(01001000)
#define B01001001 BIN_8(01001001)
#define B01001010 BIN_8(01001010)
#define B01001011 BIN_8(01001011)
#define B01001100 BIN_8(01001100)
#define B01001101 BIN_8(01001101)
#define B01001110 BIN_8(01001110)
#define B01001111 BIN_8(01001111)
#define B01010000 BIN_8(01010000)
#define B01010001 BIN_8(01010001)
#define B01010010 BIN_8(01010010)
#define B01010011 BIN_8(01010011)
#define B01010100 BIN_8(01010100)
#define B01010101 BIN_8(01010101)
#define B01010110 BIN_8(01010110)
#define B01010111 BIN_8(01010111)
#define B01011000 BIN_8(01011000)
#define B01011001 BIN_8(01011001)
#define B01011010 BIN_8(01011010)
#define B01011011 BIN_8(01011011)
#define B01011100 BIN_8(01011100)
#define B01011101 BIN_8(01011101)
#define B01011110 BIN_8(01011110)
#define B01011111 BIN_8(01011111)
#define B01100000 BIN_8(01100000)
#define B01100001 BIN_8(01100001)
#define B01100010 BIN_8(01100010)
#define B01100011 BIN_8(01100011)
#define B01100100 BIN_8(01100100)
#define B01100101 BIN_8(01100101)
#define B01100110 BIN_8(01100110)
#define B01100111 BIN_8(01100111)
#define B01101000 BIN_8(01101000)
#define B01101001 BIN_8(01101001)
#define B01101010 BIN_8(01101010)
#define B01101011 BIN_8(01101011)
#define B01101100 BIN_8(01101100)
#define B01101101 BIN_8(01101101)
#define B01101110 BIN_8(01101110)
#define B01101111 BIN_8(01101111)
#define B01110000 BIN_8(01110000)
#define B01110001 BIN_8(01110001)
#define B01110010 BIN_8(01110010)
#define B01110011 BIN_8(01110011)
#define B01110100 BIN_8(01110100)
#define B01110101 BIN_8(01110101)
#define B01110110 BIN_8(01110110)
#define B01110111 BIN_8(01110111)
#define B01111000 BIN_8(01111000)
#define B01111001 BIN_8(01111001)
#define B01111010 BIN_8(01111010)
#define B01111011 BIN_8(01111011)
#define B01111100 BIN_8(01111100)
#define B01111101 BIN_8(01111101)
#define B01111110 BIN_8(01111110)
#define B01111111 BIN_8(01111111)
#define B10000000 BIN_8(10000000)
#define B10000001 BIN_8(10000001)
#define B10000010 BIN_8(10000010)
#define B10000011 BIN_8(10000011)
#define B10000100 BIN_8(10000100)
#define B10000101 BIN_8(10000101)
#define B10000110 BIN_8(10000110)
#define B10000111 BIN_8(10000111)
#define B10001000 BIN_8(10001000)
#define B10001001 BIN_8(10001001)
#define B10001010 BIN_8(10001010)
#define B10001011 BIN_8(10001011)
#define B10001100 BIN_8(10001100)
#define B10001101 BIN_8(10001101)
#define B10001110 BIN_8(10001110)
#define B10001111 BIN_8(10001111)
#define B10010000 BIN_8(10010000)
#define B10010001 BIN_8(10010001)
#define B10010010 BIN_8(10010010)
#define B10010011 BIN_8(10010011)
#define B10010100 BIN_8(10010100)
#define B10010101 BIN_8(10010101)
#define B10010110 BIN_8(10010110)
#define B10010111 BIN_8(10010111)
#define B10011000 BIN_8(10011000)
#define B10011001 BIN_8(10011001)
#define B10011010 BIN_8(10011010)
#define B10011011 BIN_8(10011011)
#define B10011100 BIN_8(10011100)
#define B10011101 BIN_8(10011101)
#define B10011110 BIN_8(10011110)
#define B10011111 BIN_8(10011111)
#define B10100000 BIN_8(10100000)
#define B10100001 BIN_8(10100001)
#define B10100010 BIN_8(10100010)
#define B10100011 BIN_8(10100011)
#define B10100100 BIN_8(10100100)
#define B10100101 BIN_8(10100101)
#define B10100110 BIN_8(10100110)
#define B10100111 BIN_8(10100111)
#define B10101000 BIN_8(10101000)
#define B10101001 BIN_8(10101001)
#define B10101010 BIN_8(10101010)
#define B10101011 BIN_8(10101011)
#define B10101100 BIN_8(10101100)
#define B10101101 BIN_8(10101101)
#define B10101110 BIN_8(10101110)
#define B10101111 BIN_8(10101111)
#define B10110000 BIN_8(10110000)
#define B10110001 BIN_8(10110001)
#define B10110010 BIN_8(10110010)
#define B10110011 BIN_8(10110011)
#define B10110100 BIN_8(10110100)
#define B10110101 BIN_8(10110101)
#define B10110110 BIN_8(10110110)
#define B10110111 BIN_8(10110111)
#define B10111000 BIN_8(10111000)
#define B10111001 BIN_8(10111001)
#define B10111010 BIN_8(10111010)
#define B10111011 BIN_8(10111011)
#define B10111100 BIN_8(10111100)
#define B10111101 BIN_8(10111101)
#define B10111110 BIN_8(10111110)
#define B10111111 BIN_8(10111111)
#define B11000000 BIN_8(11000000)
#define B11000001 BIN_8(11000001)
#define B11000010 BIN_8(11000010)
#define B11000011 BIN_8(11000011)
#define B11000100 BIN_8(11000100)
#define B11000101 BIN_8(11000101)
#define B11000110 BIN_8(11000110)
#define B11000111 BIN_8(11000111)
#define B11001000 BIN_8(11001000)
#define B11001001 BIN_8(11001001)
#define B11001010 BIN_8(11001010)
#define B11001011 BIN_8(11001011)
#define B11001100 BIN_8(11001100)
#define B11001101 BIN_8(11001101)
#define B11001110 BIN_8(11001110)
#define B11001111 BIN_8(11001111)
#define B11010000 BIN_8(11010000)
#define B11010001 BIN_8(11010001)
#define B11010010 BIN_8(11010010)
#define B11010011 BIN_8(11010011)
#define B11010100 BIN_8(11010100)
#define B11010101 BIN_8(11010101)
#define B11010110 BIN_8(11010110)
#define B11010111 BIN_8(11010111)
#define B11011000 BIN_8(11011000)
#define B11011001 BIN_8(11011001)
#define B11011010 BIN_8(11011010)
#define B11011011 BIN_8(11011011)
#define B11011100 BIN_8(11011100)
#define B11011101 BIN_8(11011101)
#define B11011110 BIN_8(11011110)
#define B11011111 BIN_8(11011111)
#define B11100000 BIN_8(11100000)
#define B11100001 BIN_8(11100001)
#define B11100010 BIN_8(11100010)
#define B11100011 BIN_8(11100011)
#define B11100100 BIN_8(11100100)
#define B11100101 BIN_8(11100101)
#define B11100110 BIN_8(11100110)
#define B11100111 BIN_8(11100111)
#define B11101000 BIN_8(11101000)
#define B11101001 BIN_8(11101001)
#define B11101010 BIN_8(11101010)
#define B11101011 BIN_8(11101011)
#define B11101100 BIN_8(11101100)
#define B11101101 BIN_8(11101101)
#define B11101110 BIN_8(11101110)
#define B11101111 BIN_8(11101111)
#define B11110000 BIN_8(11110000)
#define B11110001 BIN_8(11110001)
#define B11110010 BIN_8(11110010)
#define B11110011 BIN_8(11110011)
#define B11110100 BIN_8(11110100)
#define B11110101 BIN_8(11110101)
#define B11110110 BIN_8(11110110)
#define B11110111 BIN_8(11110111)
#define B11111000 BIN_8(11111000)
#define B11111001 BIN_8(11111001)
#define B11111010 BIN_8(11111010)
#define B11111011 BIN_8(11111011)
#define B11111100 BIN_8(11111100)
#define B11111101 BIN_8(11111101)
#define B11111110 BIN_8(11111110)
#define B11111111 BIN_8(11111111)

//for pixels
#define __PIXEL_LINE(line) \
(uint8_t) ( ((line & 0x00000001U) ? 0x01 : 0x00)  \
          | ((line & 0x00000010U) ? 0x02 : 0x00)  \
          | ((line & 0x00000100U) ? 0x04 : 0x00)  \
          | ((line & 0x00001000U) ? 0x08 : 0x00)  \
          | ((line & 0x00010000U) ? 0x10 : 0x00)  \
          | ((line & 0x00100000U) ? 0x20 : 0x00)  \
          | ((line & 0x01000000U) ? 0x40 : 0x00)  \
          | ((line & 0x10000000U) ? 0x80 : 0x00) )\
, (uint8_t) ( ((line & 0x00000002U) ? 0x01 : 0x00) \
            | ((line & 0x00000020U) ? 0x02 : 0x00) \
            | ((line & 0x00000200U) ? 0x04 : 0x00) \
            | ((line & 0x00002000U) ? 0x08 : 0x00) \
            | ((line & 0x00020000U) ? 0x10 : 0x00) \
            | ((line & 0x00200000U) ? 0x20 : 0x00) \
            | ((line & 0x02000000U) ? 0x40 : 0x00) \
            | ((line & 0x20000000U) ? 0x80 : 0x00) )

#define C(line) __PIXEL_LINE(__HEX(line))


#endif