#include "lists.h"
#include <stdlib.h>

/**
 * free_list- frees a singly linked list
 * @head: list to be freed
 * Return: void
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
