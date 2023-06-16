#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc- allocates memory to array using malloc
 * @nmemb: Array elements
 * @size: bytes to be allocated
 * Return:  NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memloc;
	unsigned int  totalSize = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memloc = malloc(totalSize);
	if (memloc == NULL)
		return (NULL);
	if (memloc != NULL)
	{
		memset(memloc, 0, totalSize);
	}
	return (memloc);
}
