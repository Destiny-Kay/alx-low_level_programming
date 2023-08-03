#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stddef.h>
/**
 *_strlen-returns the length of a string
 *@s: astring of characters
 *Return: the length of a string
 */

size_t _strlen(char *s)
{
size_t len;
len = 0;
while (*s++)
{
len++;
}
return (len);
}

int main(void)
{
    char *string = "This\0";
    printf("%lu\n",strlen(string));
    printf("%lu\n",_strlen(string));
}