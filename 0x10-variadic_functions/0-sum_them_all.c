#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all- sums up all the arguments supplied
 * @n: first integer value
 * Return: the sum of all the arguments.
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;

	va_list ap;

	va_start(ap, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
