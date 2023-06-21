#include "function_pointers.h"
void f(char *name);
/**
 * print_name- prints a name
 * @name: name to be printed
 * @f: function
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
/**
 * f- prints a name
 * @name: the name to be printed
 * Return: void
*/
void f(char *name)
{
	int nameLength = 0;

	while (name[nameLength] != '\0')
	{
		nameLength++;
		_putchar(name[nameLength]);
	}
	_putchar('\0');
}
