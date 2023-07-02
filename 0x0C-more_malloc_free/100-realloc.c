#include "main.h"
#include <stdlib.h>

/**
 * _realloc- reallocates memory
 * @old_size: the old size of the memory
 * @new_size: the new size of the memory
 * @ptr: pointer
 * Return: void
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_new;
	char *ptr_old;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr_new = malloc(new_size);
	if (!ptr_new)
		return (NULL);

	ptr_old = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr_new[i] = ptr_old[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr_new[i] = ptr_old[i];
	}

	free(ptr);
	return (ptr_new);
}
