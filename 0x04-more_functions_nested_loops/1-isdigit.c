#include "main.h"

/**
 *_isdigit- checks whether a value is a digit
 *Return: 1-value is a digit, 0- value is not a digit
 *@c: a value to be tested
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
