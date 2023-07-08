#include "main.h"
#include <stdio.h>
int divide_by_2(unsigned int n);
/**
 * print_binary- prints a binary representation of a number
 * @n: the numbe rto be converted
 * Return: the binary representation of a number
 *
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(divide_by_2(n));
	}
	print_longint((n - (divide_by_2(n) * 2)));
}

/**
 * divide_by_2- perfoms a floor division on a number
 * @n: the number to be divided by 2
 * Return: the quotient
*/
int divide_by_2(unsigned int n)
{
	int i = 0;

	while (n >= 2)
	{
		n -= 2;
		i++;
	}
	return (i);
}

/**
 * print_longint- prints a string to the standard output
 * @num: the number to be printed
 * Return: void
*/
void print_longint(unsigned long int num)
{
	if (num >= 10)
	{
		print_longint(num / 10);
	}

	_putchar('0' + (num % 10));
}