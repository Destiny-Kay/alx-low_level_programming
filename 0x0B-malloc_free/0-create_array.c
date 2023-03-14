#include <stdlib.h>

/**
 *create_array- creates an array of characters and initializes the array with c
 *@size: the size of the array
 *@c:the characters to be initialized into the array
 *Return: 0 on fail and a pointer to the array on success
 */
char *create_array(unsigned int size, char c)
{
	if(size == 0)
	{
		return (0);
	}
	char *ch = (char)malloc(sizeof(char) * size);
	while(i < size)
	{
		_putchar(ch);
	}
	free(ch);
}
