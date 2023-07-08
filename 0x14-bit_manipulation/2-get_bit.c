#include "main.h"

/**
 * get_bit- gets the bit value of a number at a position
 * @n: the number
 * @index: the index to be gotten
 * Return: the bit at index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int n_shifted;
	unsigned int bit_value;

	n_shifted = n >> index;
	bit_value = n_shifted & 1;
	return (bit_value);
}
