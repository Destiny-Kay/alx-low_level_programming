#include "main.h"

/**
 *largest_number - prints the largest of three numbers
 *@a: firs integer
 *@b: second integer
 *@c: third integer
 *Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;

if ((a > b && b > c) || (a > c && c > b))
{
largest = a;
}
else if ((b > a && a > c) || (b > c && c > a))
{
largest = b;
}
else if ((c > a && a > c) || (c > b && b > c))
{
largest = c;
}
return (largest);
}
