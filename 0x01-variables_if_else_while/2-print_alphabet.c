#include <stdio.h>
/**
 *main - entry point
 *Description: prints the alphabet in lowercase
 *Return: 0 - success
 */
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
utchar(c);
c++;
}
putchar('\n');
return (0);
}
