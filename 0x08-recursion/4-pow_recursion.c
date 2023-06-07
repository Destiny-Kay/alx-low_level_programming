#include "main.h"
/**
 * _pow_recursion- a function that returns the value x raised to power y
 * @x: the number to be raised
 * @y: the power
 * Return: the power of x raised to y
*/
int _pow_recursion(int x, int y)
{
	int result = 0;

	if (y < 0)
		return (-1);
	else if (y == 0)
	{
		result = 1;
	}
	else if (y == 1)
	{
		result = x;
	}
	else
	{
		result = x * _pow_recursion(x, y - 1);
	}
	return (result);
}
