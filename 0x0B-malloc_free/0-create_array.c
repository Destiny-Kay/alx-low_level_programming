#include "main.h"
#include <stdlib.h>

/**
 * *create_array-creates an array of characters and initializes them
 * @size: the size of the array
 * @c: the char to initialize the array
 * Return: NULL on fail, pointer to array if sucess
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *chars;

	if (size == 0)
		return (NULL);
	chars = (char *)malloc(sizeof(char) * size);
	if (chars == NULL)
		return (NULL);
	while (i < size)
	{
		chars[i] = c;
		i++;
	}
	return (chars);
	free(chars);
}
