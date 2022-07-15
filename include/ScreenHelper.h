#pragma once
#include "FreeTouchDeckWT32.h"
uint16_t read16(fs::File &f);
uint32_t read32(fs::File &f);
unsigned long convertHTMLtoRGB888(char *html);
unsigned int convertRGB888ToRGB565(unsigned long rgb);
void drawBmpTransparent(const char *filename, int16_t x, int16_t y);
void drawBmp(const char *filename, int16_t x, int16_t y);
int32_t readNbytesInt(File *p_file, int position, byte nBytes);
uint16_t getBMPColor(const char *filename);
uint16_t getImageBG(int row, int col);
uint16_t getLatchImageBG(uint8_t row, uint8_t col);