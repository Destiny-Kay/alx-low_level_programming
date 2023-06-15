#include "main.h"
#include <stdlib.h>
unsigned int stringLength(char *s);
/**
 * string_nconcat- concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: first n bytes of s2 to be added
 * Return: Pointer to a location containing concatenated strings
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_string;
	unsigned int newlen = stringLength(s1) + n, i = 0, j = 0;

	if (n >= stringLength(s2))
		n = stringLength(s2);

	newlen = stringLength(s1) + n;

	concat_string = malloc(sizeof(*concat_string) * newlen);
	if (concat_string == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		concat_string[i] =  s1[i];
		i++;
	}
	while (j <= n)
	{
		concat_string[i] = s2[j];
		j++;
		i++;
	}
	return (concat_string);
	free(concat_string);
}
/**
 * stringLength- returns length of a string
 * @s: string of characters
 * Return: The length of the string
*/
unsigned int stringLength(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
