#include "main.h"
#include <stdlib.h>

/**
 * *_strdup- creates new space in memory for a string
 * @str: a string
 * Return: NULL on fail, pointer to string on success
*/
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *chars;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	chars = (char *)malloc(sizeof(char) * (i + 1));
	if (chars == NULL)
	{
		return (NULL);
	}
	if (str == 0)
		return (NULL);
	while (j <= i + 1)
	{
		chars[j] = str[j];
		j++;
	}
	return (chars);
	free(chars);
}
