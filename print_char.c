#include "main.h"                                                          

int print_char(va_list l_strings)
{
	char a;

	a = va_arg(l_strings, int);

	
	return (_putchar(a));
}
