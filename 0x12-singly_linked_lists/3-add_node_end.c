#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a linked list
 * @head: pointer to first node in list
 * @str:  the string to be inserted in the new node
 * Return: Pointer to new node or NULL if this fails
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;
	unsigned int length = 0;

	temp = *head;

	while (str[length])
		length++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	return (new_node);
}

