#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings- prints string args passed to it
 * @separator: a string that separates the strings
 * @n: number of string arguments passed
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *s = va_arg(args, char *);

		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if (i < n - 1)
			if (separator != NULL)
				printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
