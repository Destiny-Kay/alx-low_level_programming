#include "main.h"
#include <stdlib.h>

/**
 * _calloc- allocates memory to array using malloc
 * @nmemb: Array elements
 * @size: bytes to be allocated
 * Return:  NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memloc;

	memloc = malloc(nmemb * size);
	if (memloc == NULL)
		return (NULL);

	return (memloc);
}
