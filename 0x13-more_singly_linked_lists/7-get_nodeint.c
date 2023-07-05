#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index- gets the node at the specified index
 * @head: pointer to the first node item
 * @index: the index needed
 * Return: the nth node of a list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head != NULL)
	{
		if (n == index)
		{
			return (head);
		}
		head = head->next;
		n++;
	}
	return (NULL);
}
