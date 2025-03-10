// Copyright 2025 Morgan Nilsson
#ifndef SRC_DRIVER_INCLUDE_VGA_DRIVER_H_
#define SRC_DRIVER_INCLUDE_VGA_DRIVER_H_

#include "../../libs/include/stdtypes.h"

#define VGA_CTRL_REG 0x3d4
#define VGA_DATA_REG 0x3d5
#define VGA_OFFSET_LOW 0x0f
#define VGA_OFFSET_HIGH 0x0e

#define VGA_ADDRESS 0xB8000
#define VGA_MAX_ROWS 25
#define VGA_MAX_COLUMNS 80

#define WHITE_ON_BLACK 0x0f

void set_cursor(int offset);
int get_cursor(void);
void write_char(char c);
void write_string(const char* s);
void clear_screen();
void write_newline();
void print_letter(uint8_t scancode);
void write_hex(uint32_t n);
void write_hex_16(uint16_t n);
void write_hex_8(uint8_t n);

#endif