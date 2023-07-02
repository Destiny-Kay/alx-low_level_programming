#include <stdlib.h>
#include "main.h"

/**
 *word_count- counts the number of words in a sentence
 *@sentence: a sentence to count the number of words in
 * Return: number of words
 */
int word_count(char *sentence)
{
	int flag, i, num_words;

	flag = 0;
	num_words = 0;
	for (i = 0; sentence[i] != '\0'; i++)
	{
		if (sentence[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			num_words++;
		}
	}
	return (num_words);
}
/**
 * **strtow - splits a string into word
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *temp;
	int i, k = 0, length = 0, words, c = 0, begin, end;

	while (*(str + length))

		length++;
	words = word_count(str);
	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (begin < end)
					*temp++ = str[begin++];
				*temp = '\0';
				matrix[k] = temp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			begin = i;
	}
	matrix[k] = NULL;
	return (matrix);
}

