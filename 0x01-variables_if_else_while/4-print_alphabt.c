#include <stdio.h>
/**
 *main - entry point
 *Description:prints the alphabet in order
 *Return: 0- success
 *
 */
int main(void)
{
char c;
c = 'a';

while (c <= 'z')
{
if ((c != 'q' && c != 'e') && c <= 'z')
{
putchar(c);
}
c++;
}
putchar('\n');
return (0);
}
