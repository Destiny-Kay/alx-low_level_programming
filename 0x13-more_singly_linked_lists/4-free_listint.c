#include "lists.h"
#include <stdlib.h>

/**
 * free_listint- frees a linked list
 * @head: the start of a linked list
 * Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
