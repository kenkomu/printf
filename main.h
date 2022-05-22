#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list l_strings);
int print_str(va_list l_strings);
int print_per(va_list l_strings);
int print_int(va_list l_strings);
int (*selected(char al))(va_list)  

#endif
