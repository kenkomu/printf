#include <unistd.h>
/**
 * _putchar - writes to standard output
 *@c: character to be printed
 * Return: returns 1 if successful, -1 if otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));

}
