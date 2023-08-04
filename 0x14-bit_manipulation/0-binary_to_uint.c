#include "main.h"
#include <stdlib.h>

/**
 * power_of_2- raises 2 to the specified number of times
 * @i: the exponent
 * Return: 2 raised to an exponent i
*/
unsigned int power_of_2(unsigned int i)
{
	unsigned int result = 1, base = 2;

	while (i > 0)
	{
		if (i & 1)
			result *= base;
		i >>= 1;
		base *= base;
	}
	return (result);
}
/**
 * binary_to_uint- converts a binary number to unsigned integer
 * @b: a string that contains the binary number
 * Return: Integer representation of b on success, 0 on fail
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, num = 0, len = 0;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
			num += power_of_2(len - i - 1);
	}
	return (num);
}
