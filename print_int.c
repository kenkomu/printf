#include "main.h"
int print_int(va_list l_strings)
{
	if( n > 9 )
	{
		int a = n / 10;
		n -= 10 * a;
		iprint(a);
	}
	return (putchar('0'+n));
}
