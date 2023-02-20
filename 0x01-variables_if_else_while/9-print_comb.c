#include <stdio.h>
/**
*main - prints something
*Desciption: returns numbers of combinations of single numbers
*Return: Always 0(success)
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar (i + '0');
if (i < 9)
{
putchar (',');
putchar (' ');
}
}
putchar('\n');
return (0);
}
