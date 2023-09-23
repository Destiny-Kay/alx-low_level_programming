#include "lists.h"

/**
 * sum_dlistint- sums all node data in a doubly linked list
 * @head: head pointer to the first element in a doubly linked list
 * Return: sum of all node data
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
