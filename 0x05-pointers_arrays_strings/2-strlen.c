#include "main.h"

/**
 *_strlen-returns the length of a string
 *@s: astring of characters
 *Return: the length of a string
 */
int _strlen(char *s)
{
int len;
while (*s++)
{
len++;
}
return (len);
}
