#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end- adds a new node at the end of a linked list
 * @head: the start of a linked list
 * @n: the data to be added to the linked list
 * Return: Address of new element or NULL if it fails
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int i = 0;
	listint_t *current;
	listint_t *end_node = (listint_t *)malloc(sizeof(listint_t));

	if (end_node == NULL)
		return (NULL);
	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (*head);
	}
	if (*head == NULL)
	{
		*head = end_node;
		return (*head);
	}
	current = *head;

	while (current->next != NULL)
	{
		i++;
		current = current->next;
	}
	current->next = end_node;

	return (end_node);
}
