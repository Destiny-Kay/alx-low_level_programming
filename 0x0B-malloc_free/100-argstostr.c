#include "main.h"
#include <stdlib.h>
/**
 * str_length- calculates the total length of the strings
 * @ac: the argument counter
 * @av: argument variables
 * Return: total length of all the variables
*/
int str_length(int ac, char **av)
{
	int length = 0, i;

	for (i = 0; i < ac; i++)
	{
		char *arg = av[i];
		int len = 0;

		while (arg[len] != '\0')
		{
			len++;
		}
		length += len + 1;
	}
	return (length);
}
/**
 * argstostr- calculates the total length of the strings
 * @ac: the argument counter
 * @av: argument variables
 * Return: pointer to a new string, if fail returns NULL
*/
char *argstostr(int ac, char **av)
{
	int total_length, index = 0, length, i;
	char *result, *arg;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_length = str_length(ac, av);

	result = (char *)malloc((total_length + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		length = 0;
		while (arg[length] != '\0')
		{
			result[index] = arg[length];
			length++;
			index++;
		}
		result[index] = '\n';
		index++;
	}
	result[total_length] = '\0';

	return (result);
}
