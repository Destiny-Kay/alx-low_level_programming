#include "main.h"

/**
 *main - returns alphabets in lowercase followed by a new line
 *Description:Function returns alphabet
 *Return: 0 - success
 *
 */
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar("%c", i);
_putchar("\n");
}
}
int main(void)
{
print_alphabet();
return(0);
}
