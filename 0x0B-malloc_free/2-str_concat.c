#include "main.h"
#include <stdlib.h>
int string_length(char *s);
/**
 * str_concat- concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	int k = 0, counter = 0;
	char *s;
	int i = string_length(s1);
	int j = string_length(s2);

	s = (char *)malloc(sizeof(char) * (i + j));
	if (s == NULL)
	{
		return (NULL);
	}
	while (k < i)
	{
		s[k] = s1[k];
		++k;
	}
	while (k < (i + j))
	{
		s[k] = s2[counter];
		k++;
		counter++;
	}
	s[k] = '\0';
	return (s);
	free(s);
}
/**
 * string_length- calculates length of string
 * @s: string
 * Return: length of string
*/
int string_length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
