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

	va_start(l_strings, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case 'c':
				_putchar(va_arg(l_strings, int));
				i++;
				break;

			case 's':
				ptr = va_arg(l_strings, char *);
				for (n = 0; ptr[n] != '\0'; n++)
					_putchar(ptr[n]);
				i++;
				break;

			case '%':
				i++;
				_putchar('%');
				braek;
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
