#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char c);
int char_printf(va_list args, int prtd);
int string_printf(va_list args, int prtd);
int int_printf(va_list args, int prtd);
int functions_selector(const char *format, va_list args, int prtd);
int binary_printf(unsigned int num, int prtd);
int _printf(const char *format, ...);
int hex_printf(unsigned int num, int prtd, int UpCase);
int octal_printf(unsigned int num, int prtd);
int unsigned_printf(unsigned int num, int prtd);
int reverse_printf(va_list args, int prtd);
int pointer_printf(va_list args, int prtd);

#endif
