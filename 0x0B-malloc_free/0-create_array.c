#include <stdlib.h>
#include "main.h"

/**
 *create_array- creates an array of characters and initializes the array with c
 *@size: the size of the array
 *@c:the characters to be initialized into the array
 *Return: 0 on fail and a pointer to the array on success
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	i = 0;
	if (size == 0)
	{
		return (NULL);
	}
	ch = malloc(sizeof(char) * size);
	if (ch == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		ch[i] = c;
		i++;
	}
	free(ch);
	return (ch);
}
