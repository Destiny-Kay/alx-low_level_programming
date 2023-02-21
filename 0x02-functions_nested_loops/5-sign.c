#include "main.h"

/**
 *print_sign- returns the sign of a number
 *Description: checks whether a number is -ve, +ve or 0
 *Return: 1- positive, 0- zero, -1- negative
 *@n: integer number
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
