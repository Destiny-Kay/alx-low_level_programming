#include "lists.h"
#include <stdlib.h>

/**
 *free_listint- frees a linked list
 *@head: pointer to head element of linked list
 *Return: void
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
