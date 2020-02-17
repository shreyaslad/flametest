/*
                                string.h
                                Copyright Shreyas Lad (PenetratingShot) 2019
                                Licensed under the MIT License

                                Handy string manipulation and conversion
   functions
*/

#pragma once

#include "../cpu/type.h"
#include <mm/mm.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

void itoa(int n, char* str);
void itoa_uint8(uint8_t num, char* str);
void hex_to_ascii(int64_t n, char* str);

void backspace(char* s);

void reverse(char* s);
uint64_t strlen(char* s);
void append(char s[], char n);
char* strcat(char* s, char* n);
char* strcpy(char* dest, char* src);

uint64_t strcmp(char* s1, char* s2);
uint64_t strcmpl(char* s1, char* s2, uint8_t x);
char* strtok(char* str, const char* delimiter);

char removeNull(char* s);
void remove(char* s, uint32_t pos);