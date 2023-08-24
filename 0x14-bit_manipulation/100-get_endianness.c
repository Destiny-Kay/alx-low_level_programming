#include "main.h"

/**
 *get_endianness- finds the endianness of a number
 *Return: 0- big endian 1- little endian
 *
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	if (*byte == 1)
		return (1);
	else
		return (0);
}
