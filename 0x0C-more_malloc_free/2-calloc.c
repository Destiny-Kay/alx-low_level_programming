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
void mem = malloc(size * nmemb);

if (nmemb == 0 || size == 0)
{
	return (NULL);
}
if (!mem)
{
	return (NULL);
}

return (mem);
}
