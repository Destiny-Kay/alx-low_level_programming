#include "main.h"
#include <stdlib.h>
/**
 * clear_bit-clears a bit in a specified location
 * @n:a number
 * @index: index to be cleared
 * Return:  1 on success and -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	*n &= ~(1ul << index);

	return (1);
}
