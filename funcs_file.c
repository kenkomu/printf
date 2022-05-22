#include "main.h"

int (*selected(char al))(va_list)
{
	if (al == 'c')
		return (print_char);

	if (al == 's')
		return (print_str);

	if(al == 'd')
		return (print_int);

	if (al == '%')
		return (print_per);

	if (al == 'i')
		return (print_int);

	return (NULL);
}
