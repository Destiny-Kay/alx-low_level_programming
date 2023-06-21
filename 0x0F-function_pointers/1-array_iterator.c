#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator- iterates through array and runs action on each
 * @array: array elements
 * @size: the size of the array
 * @action: the action to be taken on each array element
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || size == 0)
		return;
	if (action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
