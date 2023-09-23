#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint- prints all elements of a doubly linked list
 * @h: pointer to a doubly linked list in c
 * Return: number of elements in a doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
