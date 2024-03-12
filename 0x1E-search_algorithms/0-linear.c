#include "search_algos.h"

/**
 * linear_search-A function that searches for an element
 *      using the linear searchalgorithm
 * @array: An array of elements where we search from
 * @size: Number of elements in the array
 * @value: The value we are searching for
 *
 * Return: the index where value is first found or -1 if there is no value
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
