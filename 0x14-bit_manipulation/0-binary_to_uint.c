#include "main.h"
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int stringLength(const char *c);
int power(int base, int exponent);

unsigned int binary_to_uint(const char *b)
{
	int i;
	int stringLen = stringLength(b);
	int exponent = stringLen - 1;
	int result = 0;

	if (b == NULL)
	{
	return (0);
	}
	for (i = 0; i < stringLen; i++)
	{
	if (b[i] != '0' && b[i] != '1')
	{
	return (0);
	}
	else
	{
	if (b[i] == '1')
	{
	int number = exponent - i;

	result += power(2, number);
	}
	}
	}
	return (result);
}

int stringLength(const char *c)
{
	int length = 0;

	while (c[length] != '\0')
	{
	length++;
	}
	return (length);
}

int power(int base, int exponent)
{
	int result = 1;
	int i = 0;

	while (i < exponent)
	{
	result *= base;
	i++;
	}
	return (result);
}

