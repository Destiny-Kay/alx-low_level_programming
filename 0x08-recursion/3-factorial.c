#include "main.h"

/**
 * factorial- a function that returns the factorial of a number
 * @n: an integer whose factorial is to be calculated
 * Return: the factorial of a number
*/

int factorial(int n)
{
	int i = 0;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 0 || n == 1)
		{
			i = 1;
		}
		else
		{
			i = n * factorial(n - 1);
		}
	}
	return (i);
}
