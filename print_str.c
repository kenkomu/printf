#include "main.h"
#include <stdarg.h>

int print_str(va_list l_strings)
{
	int k = 0;
	char *s = va_arg(l_strings, char *);

	while (s[k] != '\0')
	{
		_putchar(s[k]);
		k++;
	}
	return (0);
}
