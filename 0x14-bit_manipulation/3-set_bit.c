#include "main.h"

/**
 * set_bit- sets a bit at a given index to 1
 * @n: the number
 * @index: the index of bit to be converted
 * Return: 1 on success and -1 on fail
 */
int set_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask;
	unsigned int result;

	mask = 1 << index;
	result = n | mask;

	return (result);
}
