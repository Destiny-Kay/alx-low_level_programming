#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint- pops a list node
 * @head: pointer to first element in the list
 * Return: The value of the poped item
*/

int pop_listint(listint_t **head)
{
	int n;
	listint_t *new_head;

	if (*head == NULL)
		return (0);
	new_head = *head;
	n = new_head->n;
	(*head) = new_head->next;
	return (n);
	free(new_head);
}
