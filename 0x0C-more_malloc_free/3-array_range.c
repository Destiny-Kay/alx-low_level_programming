#include "main.h"
#include <stdlib.h>

/**
 *array_range- creates an aray of elements from min to max
 *@min: the minimum element(starting el) in array
 *@max: the maximu element in array(ending)
 *Return: the pointer to the array of elements
 *
 */

int *array_range(int min, int max)
{
	int *arr;
	int i = 0;
	int numelements;

	if (min > max)
	{
		return (NULL);
	}

	numelements = max - min + 1;

	arr = (int *)malloc(numelements);

	if (arr == NULL)
		return (NULL);
	int j = min;

	while (i < numelements)
	{
		arr[i] = j;
		i++;
		j++;
	}
	return (arr);
}
