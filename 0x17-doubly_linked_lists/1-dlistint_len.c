#include "lists.h"
/**
 * dlistint_len- returns the number of elements in doubly linked list
 * @h: a linked list data structure
 * Return: number of elements in a doubly linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return len;
}
