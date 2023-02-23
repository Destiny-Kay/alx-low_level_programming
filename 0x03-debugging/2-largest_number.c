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

  if (a > b && b > c)
    {
      largest = a;
    }
  else if (b > a && a > c)
    {
      largest = b;
    }
  else
    {
      largest = c;
    }
  return (largest);
}
