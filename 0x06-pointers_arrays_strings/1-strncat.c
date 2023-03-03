#include "main.h"
/**
 *_strncat- concatenates two strings
 *@dest: the destination string
 *@src: the source string
 *Return: a string of character
 */
char *_strncat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
	dest_len++;
	for (i = 0; src[i] && i < n; i++)
	dest[des_len++] = src[i];
	return (dest);
}
