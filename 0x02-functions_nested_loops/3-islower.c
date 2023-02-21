#include "main.h"

/**
 *_islower - checks whether a character is in lowercase
 *@c: any character of the alphabet
 *Description c: any character
 *Description: the program checks whether it is in its lowercase
 *Return: 1 - success, 0-otherwise
 *
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return(0);
}
