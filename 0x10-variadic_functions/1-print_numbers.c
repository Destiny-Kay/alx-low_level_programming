#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 *print_numbers- prints numbers entered
 *@separator: number that sepoarates the numbers
 *@n: number of integers
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		printf("%i", va_arg(args, unsigned int));
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
