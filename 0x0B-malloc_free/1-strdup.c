#include "main.h"
#include <stdlib.h>
/**
 *_strdup- a function that duplicates a string
 *@str:a string of characters
 *Return: NULL if string is empty, buffer if string exists
 *
 */
char *_strdup(char *str)
{
	char *buffer;
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	buffer = (char *)malloc(sizeof(char) * (i + 1));


	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		int j = 0;

		while (j <= i + 1)
		{
			buffer[j] = str[j];
			j++;
		}
		return (buffer);
	}

	free(buffer);
}
