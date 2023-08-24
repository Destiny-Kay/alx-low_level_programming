#include "main.h"

/**
 * flip_bits- finds number of bits needed
 * to be flipped in orfer to get from
 * onenumber to another.
 * @n: first number
 * @m: second number
 * Return: number of bits needed to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num_bits = 0;
	unsigned long int _xor = n ^ m;

	while (_xor != 0)
	{
		num_bits += _xor & 1;
		_xor >>= 1;
	}
	return (num_bits);
}
