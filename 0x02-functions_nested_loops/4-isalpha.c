#include "main.h"
/**
 *_isalpha - function checks for alphabets
 *Description: function takes in nascii code and determines if c is in alphabet
 *Return: 1-is alphabet, 0- is not alphabet
 *@c: input character
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
return (0);
}
