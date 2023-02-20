#include <stdio.h>
/**
*main - entry point
*Description: returns the alphabet in lowercase then in uppercase
*Return: 0 - success
*/
int main(void)
{
char c;
char u;
c = 'a';
u = 'A';

while (c <= 'z')
{
putchar(c);
c++;
}
while (u <= 'Z')
{
putchar(u);
u++;
}
putchar('\n');
return (0);
}
