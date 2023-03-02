#include "main.h"
/**
 *_strcpy- copies
 *
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_length = 0;
	while (src[i++])
	{
		src_len++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = src_len; i < n; i++)
	{
		des[i] = '\0';
	}
	return (des);
}
