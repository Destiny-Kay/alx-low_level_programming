#include "main.h"
/**
 *_abs- calculate the absolute value of a number
 *Description: program takes a number and calculates its absolute value
 *@c: an integer number
 *Return: absolute_value
 */
int _abs(int c)
{
int absolute_value;
if (c > 0)
{
absolute_value = c;
}
else
{
absolute_value = c * -1;
}
return (absolute_value);
}
