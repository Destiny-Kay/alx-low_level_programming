#include <stdio.h>
#include "main.h"

/**
 *_isupper-checks whether a character is in uppercase
 *Return: 1-is uppercase else returns 0
 *@c: a single character
 *
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
