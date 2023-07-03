#include "lists.h"

/**
 * listint_len- returns athe number of elements in a linked list
 * @h: a linked list
 * Return: number of elements in a list
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
