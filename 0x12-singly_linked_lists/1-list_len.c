#include "lists.h"
#include <stddef.h>

/**
 *list_len- returns the number of elements in an array
 *@h: linked list elements
 *Return: number of elements in a list
 */

size_t list_len(const list_t *h)
{
	size_t numElements = 0;

	while (h)
	{
		numElements++;
		h = h->next;
	}
	return (numElements);
}
