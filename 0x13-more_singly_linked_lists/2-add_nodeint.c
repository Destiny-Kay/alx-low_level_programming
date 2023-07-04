#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint- adds a new node at the beginning of a linked list
 * @head: pointer to first node
 * @n: value of the linked list item
 * Return: address of the new element, NULL if it fails
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = (listint_t *)malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);
	new_head->n = n;
	new_head->next = *head;
	*head = new_head;
	return (*head);
}
