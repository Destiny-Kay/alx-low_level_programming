#include "main.h"
int sqrt_recursion(int n, int i);
/**
 *_sqrt_recursion- returns the square root of a natural number
 *@n: an integer
 *Return: -1 if number has not a natural sqrt, sqrt otherwise
 *
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
	return (-1);
}
return (sqrt_recursion(n, 0));
}

/**
 *sqrt_recursion- returns the actual square root
 *@n: an integer value
 *@i: an integer value
 *Return: the squareroot of a number
 */
int sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (sqrt_recursion(n, i + 1));
}
