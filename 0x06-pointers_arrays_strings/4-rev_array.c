#include "main.h"

/**
 *reverse_array- a function that reverses an array
 *@a: the array to be reversed.
 *@n: the number of elements in the array.
 *
 */
void reverse_array(int *a, int n)
{
	int temp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
	}
}
