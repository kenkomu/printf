#include "main.h"
/*
 * *_printf - function that produces output according to a format
 * *@format: character string
 * *return: number of chacaracters printed
 * */
int _printf(const char *format, ...)
{
	va_list l_strings;
	int char_count = 0;
	int i, n;
	char* ptr;
	int (*func_sel)(l_strings);

	va_start(l_strings, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			func_sel = selected(format[i + 1]);
			if (!func_sel)
			{
				func_sel(l_strings);
				i++;
				char_count++;
			}
		}
		else
		{
			_putchar(format[i]);
			char_count += 1;
		}
	}

	va_end(l_strings);
	return (char_count);
}
