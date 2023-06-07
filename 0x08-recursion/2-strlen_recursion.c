#include "main.h"

/**
 * _strlen_recursion- function returns the length of a string
 * @s: a string
 * return: the length of the string
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
