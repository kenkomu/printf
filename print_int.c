#include "main.h"
int print_int(va_list l_strings)
{
	int n;

	n = va_arg(l_strings, int);
	int printfs(int i)
	{
		if(n > 9)
		{
			int a = n / 10;
			n -= 10 * a;
			printfs(a);
		}
	}
	return (_putchar('0'+n));
}
