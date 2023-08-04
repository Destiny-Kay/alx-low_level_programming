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
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	if (n >> index != 0)
		return (n >> index & 1);
	return (-1);

}
