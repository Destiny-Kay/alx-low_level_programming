#include "lists.h"

/**
 * get_dnodeint_at_index- gets a node at a certain index
 * @head: pointer to the head element
 * @index: index of the to be gotten
 * Return: node at the index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter;

	if (head == NULL)
		return (NULL);

	for (counter = 0; counter <= index; counter++)
	{
		if (counter == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
