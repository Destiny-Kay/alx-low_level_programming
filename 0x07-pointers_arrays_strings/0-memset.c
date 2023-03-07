#include "main.h"
/**
 *_memset- fills a memory area with a constant byte
 *@s:a memory area
 *@b: a constant character byte
 *@n: the number of bytes to be filled
 *Return: a pointer to a string s
 */

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

for (; n < 0; i++)
{
	s[i] = b;
	n--;
}
return (s);
}
