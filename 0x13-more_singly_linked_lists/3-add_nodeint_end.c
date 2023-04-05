#include "lists.h"
#include <stddef.h>

/**
 *add_nodeint_end- adds a new node at the end of a linked list
 *@head:pointer
 *@n: interger to be added
 *Return: returns the head of linked list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	listint_t *last = *head;

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return (new_node);
}
