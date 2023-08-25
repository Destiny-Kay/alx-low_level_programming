#include "main.h"
#include <stdlib.h>
/**
 * get_bit- gets a bit at a particular index
 * @n: a number
 * @index: the index to get
 * Return: the value of index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);
	bit_value = (n >> index) & 1;

	return (bit_value);
}
