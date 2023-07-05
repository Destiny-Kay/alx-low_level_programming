#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2- frees a list and sets the head to NULL
 * @head: pointer to the first node in the list
 * Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;

	while (*head != NULL)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}
	(*head) = NULL;
}
