#include "lists.h"
#include <stdio.h>

/**
 *print_listint- prints all the elements in a linked list
 *@h: a linked list
 *Return: number of nodes in a linked list
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t numberOfNodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		numberOfNodes++;
		h = h->next;
	}
	return (numberOfNodes);
}
