#include "main.h"

/**
 *_memcpy- a function that copies a memory area
 *@dest: the destination memory area
 *@src: the source memory area
 *@n: the number of bytes to be copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int j = 0;
int i = n;

for (; j < i; j++)
{
	dest[j] = src[j];
	n--;
}
return (dest);
}
