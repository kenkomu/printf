#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
int _putchar(char c);
int _printf(const char *format, ...);
int _print_char(va_list ap);
int print_number(va_list*);
int print_numb(int n);
int print_string(va_list ap);
int print_percent(va_list arg __attribute__((unused)));
int puts (const char *__s);

#endif
