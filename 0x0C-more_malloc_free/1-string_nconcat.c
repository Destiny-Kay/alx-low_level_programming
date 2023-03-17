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
	unsigned int sizes1 = 0;
	unsigned int sizes2 = 0;

	while (s1[sizes1] != '\0')
	{
		sizes1++;
	}
	while (s2[sizes2] != '\0')
	{
		sizes2++;
	}

	unsigned int totalsize = sizes1 + n + 1;
	char *concString = (char *)malloc(totalsize);

	if (concString == NULL)
	{
		return (NULL);
		exit(1);
	}

	unsigned int i = 0;

	while (i <= sizes1)
	{
		concString[i] = s1[i];
		i++;
	}
	while (i <= n)
	{
		unsigned int j = 0;
		concstring[i] = s2[j];
		j++;
		i++;
	}

	if (n < sizes2)
	{
		concstring[i] = '\0';
	}

	return (concstring);
}
