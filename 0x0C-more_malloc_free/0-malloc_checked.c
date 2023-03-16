#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked- allocated a memory segment
 *@b:the size if memory(int)
 *Return: pointer to the allocated memory
 *
 */

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
{
	exit(98);
}
return (ptr);
}
