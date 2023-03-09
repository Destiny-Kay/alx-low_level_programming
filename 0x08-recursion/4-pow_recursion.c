#include "main.h"
/**
 *_pw_recursion- returns a number raised to a power
 *@x: int to be raised
 *@y: the power
 *Return: the power of x raised to y
 */
int _pw_recursion(int x, int y)
{

if (y < 0)
{
	return (-1);
}
else if (y == 1)
{
	return (x);
}
return (x * _pw_recursion(x, y - 1));
}
