#include "lists.h"
#include <stddef.h>

/**
 *listint_len- returns the number of elements in a linked list
 *@h: a linked list
 *Return: number of elements in an array
 */
size_t listint_len(const listint_t *h)
{
	size_t numberOfElements = 0;

	while (h != NULL)
	{
		numberOfElements++;
		h = h->next;
	}
	return (numberOfElements);
}
