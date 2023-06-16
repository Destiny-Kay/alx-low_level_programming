#include "main.h"
#include <stdlib.h>
unsigned int stringLength(char *s);
char *checkNULL(char *s);
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
	char *string1 = checkNULL(s1);
	char *string2 = checkNULL(s2);
	unsigned int newlen, i = 0, j = 0;

	newlen = stringLength(string1) + n;
	if (n >= stringLength(string2))
		n = stringLength(string2);


	newlen = stringLength(string1) + n;

	concat_string = malloc(sizeof(*concat_string) * newlen);
	if (concat_string == NULL)
		return (NULL);
	while (string1[i] != '\0')
	{
		concat_string[i] =  string1[i];
		i++;
	}
	while (j < n)
	{
		concat_string[i] = string2[j];
		j++;
		i++;
	}
	concat_string[i] = '\0';
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
/**
 * checkNULL- checks whether a string is NULL
 * @s: string to be checked
 * Return: "" if NULL and the string otherwise
*/
char *checkNULL(char *s)
{
	if (s == NULL)
		return ("");
	return (s);
}