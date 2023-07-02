#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range- creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to new array
*/
int *array_range(int min, int max)
{
	int *newarr;
	int i, size;

	size = max - min + 1;

	if (min > max)
		return (NULL);

	newarr = malloc(sizeof(int) * size);

	if (newarr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		newarr[i] = min++;
	return (newarr);
}
