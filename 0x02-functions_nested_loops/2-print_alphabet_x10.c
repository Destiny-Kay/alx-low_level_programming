#include "main.h"

/**
 *print_alphabet_x10 - prints alphabet letters 10 times
 *Description: the program outputs the letters of the alphabet 10 times
 *Return: void
 *
 */

void print_alphabet_x10(void)
{
char c;
int i;
for (i = 1; i <= 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
