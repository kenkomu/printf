#include "../main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0;
 */
int main(void)
{
	int a = _printf("this is us\n");
	int b = printf("this is us\n");

	_printf("_printf: %d\n", a);
	printf("printf: %d\n", b);

	_printf("_printf specifier (c): %c\n", 'k');
	printf("printf specifier (c): %c\n", 'k');

	_printf("_printf specifier (s): %s\n", "string");
	printf("printf specifier (s): %s\n", "string");
	
	_printf("_print specifier %%\n");
	printf("printf specifier %%\n");

	return (0);
}
