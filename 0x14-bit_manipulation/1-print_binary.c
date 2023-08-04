#include "main.h"


/**
 * print_binary- prints the binay representation of a number
 * @n: a number
 * Return: the binary rep of the number n
*/
void print_binary(unsigned long int n)
{
	int bit, msb = 1;

	while ((n >> msb) != 0)
	{
		msb++;
	}
	msb--;

	for (msb = msb; msb >= 0; msb--)
	{
		bit = (n >> msb) & 1;
		_putchar('0' + bit);
	}
}
