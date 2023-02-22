#include "main.h"
#include <stdio.h>
/**
 *print_to_98- prints natural numbers
 *Description: takes in input n and prints numbers from n to 98
 *@n: number variable
 *Return: void
 */
void print_to_98(int n)
{
if (n <= 98)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
}
else
{
while (n > 98)
{
printf("%d, ", n);
n--;
}
}
if (n == 98)
{
printf("98");
}
}
