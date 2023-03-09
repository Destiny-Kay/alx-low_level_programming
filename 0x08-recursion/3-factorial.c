#include "main.h"
/**
 *factorial- returns the factorial of a number
 *@n: an ineger number
 *Return: an int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
		return (factorial(n) * factorial(n - 1));
}
