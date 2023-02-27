#include "main.h"

/**
 *_puts- prints a string of characters to the standard output
 *@str: a string
 *Return: void
 *
 *
 */

void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
