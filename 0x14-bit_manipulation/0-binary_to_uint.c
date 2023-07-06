#include "main.h"
#include <stdlib.h>
unsigned int power(unsigned int num, unsigned int pow);
/**
 * binary_to_uint- converts a binary integer to unsigned int
 * @b:string of BITS
 * Return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, i = 0, uint = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);
		len++;
	}
	while (i < len)
	{
		if (b[i] == '1')
		{
			uint += power(2, len - 1 - i);
		}
		i++;
	}
	return (uint);
}
/**
 * power- calculates the power of a num
 * @num: the number to be raised
 * @pow: the power to be raised to
 * Return: the value of num raised to pow
*/
unsigned int power(unsigned int num, unsigned int pow)
{
	unsigned int i = 0, result = 1;

	while (i < pow)
	{
		result *= num;
		i++;
	}
	return (result);
}

