#include <stdio.h>
unsigned int divide_by_10(unsigned int num)
{
    unsigned int quotient = (num >> 1) + (num >> 2);  // Divide by 2 and add to the quotient
    quotient = (quotient + (quotient >> 4));
    quotient += (quotient >> 8);
    quotient += (quotient >> 16);
    quotient >>= 3;  // Divide by 8 (2^3)

    return quotient;
}

int main()
{
    int n = divide_by_10(23);
    printf("%d", n);
    return 0;
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