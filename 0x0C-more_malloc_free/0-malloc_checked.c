#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked- allocates memeory using malloc
 * @b: the size of memory to be allocated
 *Return: void
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
