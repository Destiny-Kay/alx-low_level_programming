#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all- sums up a list of uknown number of numbers
 *@n: first integer
 *Return: the sum of all integer variables
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int result;
	va_list args;
	unsigned int i;

	va_start(args, n);

	if (n == 0)
		return (0);
	result = 0;

	for (i = 0; i < n; ++i)
	{
		result += va_arg(args, int);
	}
	va_end(args);
	return (result);
}
