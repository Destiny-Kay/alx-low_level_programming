#include "main.h"
/**
 *_strcat- concatenates two strings
 *@dest: the destination string
 *@src: the source string
 *Return: a string of character
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
	{
	dest_len++;
	}
	for (i = 0; src[i] && index < n; i++)
	{
	dest[dest_len++] = src[i];
	}
	return (dest);
}
