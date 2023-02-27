#include "main.h"
/**
 *puts2-prints every other character of a string
 *@str: a string
 *Return: void
 *
 */
void puts2(char *str)
{
int c = 0;
while (str[c] != '\0')
{
if (c % 2 != 0)
{
_putchar(str[c]);
}
}
_putchar('\n');
}
