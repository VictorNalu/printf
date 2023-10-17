#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

int print_revs(va_list val);
int printf_char(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
int printf_string(va_list val);

#endif
