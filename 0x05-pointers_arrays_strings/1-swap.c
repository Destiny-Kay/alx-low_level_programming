#include "main.h";
/**
 *swap_int-swaps the values of two ineger numbers
 *@a: iteger value 1
 *@b: integer value 2
 *Return: void
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*b = *a;
*a = *b;
}
