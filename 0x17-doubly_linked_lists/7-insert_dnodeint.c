#include "lists.h"

/**
 * insert_dnodeint_at_index- inserts a node at a certain index in a dlist
 * @h: head node pointer to start of dlinkedlist
 * @idx: index
 * @n: node data to be inserted
 * Return: address of the new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new;
	unsigned int counter;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	current = *h;

	if (idx == 0)
	{
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	for (counter = 0; counter < idx - 1 && current != NULL; counter++)
		current = current->next;
	if (current == NULL)
	{
		free(new);
		return (NULL);
	}
	new->prev = current;
	new->next = current->next;
	if (current->next)
		current->next->prev = new;
	current->next = new;
	return (new);
}
