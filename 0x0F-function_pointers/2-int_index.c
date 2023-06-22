#include "function_pointers.h"

/**
 * int_index- returns first index that satisfies function cmp
 * @array: array of integers
 * @size: size of the array
 * @cmp: function to compare array at position index
 * Return: index of an element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL)
		return (-1);
	if (array == NULL || size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
