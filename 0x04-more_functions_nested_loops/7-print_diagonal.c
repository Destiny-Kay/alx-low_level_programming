#include "main.h"
/**
 *print_diagonal- prints a line diagonally
 *@n: number of times to print the \ symbol
 *Return: void
 */

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
for (j = 0; j < n; j++)
{
for (i = 0; i < j; i++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');

}
}
}
