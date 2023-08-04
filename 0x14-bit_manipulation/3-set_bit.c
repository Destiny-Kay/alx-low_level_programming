#include "main.h"
#include <stdio.h>
/**
 * set_bit- sets a bit at a given index to 1
 * @n: the number
 * @index: the index of bit to be converted
 * Return: 1 on success and -1 on fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= (1UL << index);
	return (1);
}

