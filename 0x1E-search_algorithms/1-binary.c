#include "search_algos.h"

/**
 * binary_search- implementation of the binary search algorithm
 * @array: An array of elements to search from
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: -1 if no matching value found or array is NULL,
 * otherwise index where value id found
 *
*/
int binary_search(int *array, size_t size, int value)
{
	int left_index = 0;
	int right_index = size - 1;
	int middle_index;
	int i;

	if (!array)
		return (-1);

	while (left_index <= right_index)
	{
		middle_index = (right_index + left_index) / 2;
		i = left_index;
		printf("Searching in array: ");
		while (i < right_index)
		{
			printf("%d, ", array[i]);
			i++;
		}
		printf("%d\n", array[i]);
		if (array[middle_index] < value)
			left_index = middle_index + 1;
		else if (array[middle_index] > value)
			right_index = middle_index - 1;
		else
			return (middle_index);
	}
	return (-1);
}
