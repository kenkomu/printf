#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * print_string - print string
 * @ap: arg list
 * return: number of printed char
 */
int print_string(va_list ap)
{
	char *arg = va_arg(ap, char *);
	int sum = 0;

	if (!arg)
	{
		sum += _printf("(null)", 0);
		return (sum);
	}

return (_printf(arg, 0));
}

/**
 * print_percent -print percent
 * arg: char
 * return: percent character
 */
int print_percent(va_list arg __attribute__((unused)))
{
	return (_putchar('%'));
}

/**
 * print_number - print number
 * @ap: arg list
 * return: number of printed char
 */
int print_number(va_list int)
{
	return (print_number(va_arg(ap, int)));
}

/**
 * print_numb - diplays the number contained in the integer
 * @n: int to print
 * return: number of printed char
 */
int print_numb(int n)
{
	unsigned int nb;
	int count = 0;

	nb = n;
	if (n < 0)
	{
		_putchar('-');
		count++;
		nb = -nb;
	}
	if (nb <= 9)
	{
		count += _putchar(nb + '0');
		return (count);
	}
	if (nb > 9)
	{
		count += print_number(nb / 10) + 1;
		_putchar(nb % 10 + '0');
		return (count);
	}
	return (0);
}

