#include "main.h"
int find_square(int n, int i);
/**
 * _sqrt_recursion- returns the natural square root of a number
 * @n: the number whose square root is to be calculated
 * Return: the square root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_square(n, 0));
}
/**
 * find_square- bruteforce finding of squareroot of numbers
 * @n: the number to be square rooted
 * @i: a guess that increments f,rom 0
 * Return: the square root of all numbers that are naturall
*/
int find_square(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (find_square(n, i + 1));
}
