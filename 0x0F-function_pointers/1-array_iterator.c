#include "function_pointers.h"

/**
 *array_iterator-passes function to an array of objects
 *@array:an array of elements
 *@size: size of  the array
 *@action: function to be used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		int element = array[i];

		action(element);
		i++;
	}
}
