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

int check_palindrome(char *s, int i, int length)
{
	if (s[i] == s[length])
	{
		return (1);
	}
	else
		return (0);
	check_palindrome(s, i + 1, length - 1);
}

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
