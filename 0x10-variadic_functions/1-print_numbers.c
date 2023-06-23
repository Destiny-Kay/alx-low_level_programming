#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers- prints the supplied numbers
 * @separator: the string printed between numbers
 * @n: the number of integers passed to the function
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (n == 0)
		return;
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1)
			if (separator != NULL)
				printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
