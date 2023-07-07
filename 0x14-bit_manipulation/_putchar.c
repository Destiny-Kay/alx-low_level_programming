#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_longint- prints a string to the standard output
 * @num: the number to be printed
 * Return: void
*/
void print_longint(unsigned long int num)
{
	if (num >= 10)
	{
		print_longint(num / 10);
	}

	_putchar('0' + (num % 10));
}
