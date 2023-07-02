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
	int range = (max - min) + 1, i = 0;

	if (range < 0)
		return (NULL);
	printf("%d\n", range);
	newarr = malloc(sizeof(newarr) * range);
	printf("%ld\n", sizeof(newarr) * range);
	if (newarr == NULL)
		return (NULL);
	while (i < range)
	{
		newarr[i] = min + i;
		i++;
	}
	return (newarr);
	free(newarr);
}
