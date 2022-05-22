#include "main.h"                                                              ##include <stdarg.h>                                                           

int print_char(va_list args, int *inlength)
{
	char a;

	a = va_arg(args, int);

	_putchar(a);
	*inlength += 1;
	return (*inlength);
}
