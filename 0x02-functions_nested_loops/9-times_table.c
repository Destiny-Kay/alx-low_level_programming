#include "main.h"
/**
 *times_table- function returns the 9 times table
 *Description: the function prints to the stdout the times table
 *
 *
 */
void times_table(void)
{
int i, num, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
result = num * j;
_putchar(result + '0');
_putchar(' ');
}
_putchar('\n');
num++;
}
}
