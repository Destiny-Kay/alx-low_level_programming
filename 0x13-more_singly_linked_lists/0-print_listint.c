#include "lists.h"
#include <stdio.h>

/**
 * print_listint- prints a list DS
 * @h: a singly linked list
 * Return: Number of nodes in the DS
 *
*/

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
