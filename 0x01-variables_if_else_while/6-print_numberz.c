#include <stdio.h>
/**
 *main - entry point
 *Description: prints single digits of numbers in base 10
 *Return: 0 -success
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
