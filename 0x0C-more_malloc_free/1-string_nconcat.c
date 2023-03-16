#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat- concatenates two strings
 *@s1: first string
 *@s2: second string
 *@n:an integer
 * Return: NULL if malloc fails, Pointer to memory alloc if (success)
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1size = sizeof(s1);
	int charsize = (s1size + n);
	int i = 0;

	char *concatenated = (char *)malloc(sizeof(char) * charsize);

	if (concatenated == NULL)
	{
		return (NULL);
		exit(1);
	}
	while (i < s1size)
	{
		concatenated[i] = s1[i];
		i++;
	}
	while (i <= n)
	{
		concatenated[i] = s2[i];
		i++;
	}
	if (n < sizeof(s2))
	{
		concatented[i] = '\0';
	}

	return (concatenated);
}
