#include "main.h"
int check_palindrome(char *s, int i, int length);
int _strlen_recursion(char *s);
/**
 * is_palindrome - checks whether a character is a palindrome
 * @s: the character to be checked
 * Return: 1 if string is palindrome and 9 otherwise
*/

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s) - 1;

	return (check_palindrome(s, 0, length));
}

/**
 * check_palindrome- function checks whether a string is a palindrome
 * @s: a string var
 * @i: an index pointer
 * @length: the length of the palindrome
 * Return: 1 if number is a palindrome and 0 otherwise
*/
int check_palindrome(char *s, int i, int length)
{
	if (s[i] == s[length])
	{
		check_palindrome(s, i + 1, length - 1);
		return (1);
	}
	else
		return (0);
}

/**
 * _strlen_recursion- a function that finds the length of a string variable
 * @s: a string variable
 * Return: the length of a string
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);

}
