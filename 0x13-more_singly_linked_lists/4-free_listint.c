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
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
	head = NULL;
}
