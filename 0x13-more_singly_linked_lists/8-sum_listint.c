#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint- sums up all the values of a linked list
 * @head: the head node
 * Return: the sum of all the node values
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
