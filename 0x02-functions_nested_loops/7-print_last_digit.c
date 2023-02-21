#include "main.h"
/**
 *print_last_digit- prints the last digit of a number
 *Description the function takes in a number and returns the lst digit
 *Return: last digit of the number
 *@int: a number
 */
int print_last_digit(int)
{
int num;
int last_digit = num % 10;
_putchar(&last_digit + '0');
return (last_digit);
}
