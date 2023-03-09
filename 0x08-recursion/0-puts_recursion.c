#include "main.h"
/**
 *_puts_recursion-function that prints a string using the _putchar function
 *@s: a string t be printed
 *Return: void
 *
 */
void _puts_recursion(char *s)
{

	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
