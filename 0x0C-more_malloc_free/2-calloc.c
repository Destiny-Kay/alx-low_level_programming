#include "main.h"
#include <stdlib.h>

/**
 *_calloc-allocates memory for an array
 *@nmemb:array elements
 *@size:the size oeach element in the array
 *Return: the pointer to a memory location, NULL if allocation fails
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i = 0;

if (nmemb == 0 || size == 0)
{
	return (NULL);
}

char *mem = malloc(size * nmemb);

if (mem == NULL)
{
	return (NULL);
}

while (i < (size * nmemb))
{
	mem[i] = 0;
	i++;
}


return (mem);
}
