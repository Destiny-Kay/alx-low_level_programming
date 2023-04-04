#include "lists.h"
#include <stdio.h>

/**
 *
 *
 *
 *
 */

size_t print_listint(const listint_t *h)
{
	int numberOfNodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		numberOfNodes++;
		h = h->next;
	}
	return (numberOfNodes);
}
