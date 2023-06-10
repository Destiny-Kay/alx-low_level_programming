#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main-  adds positive numbers
 * @argc: argument counter
 * @argv: argument vars
 * Return: 0- sucess, 1-error
*/

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	int a;

	if (argc >= 2)
	{
		for (i =  1; i < argc; i++)
	{
		a = atoi(argv[i]);
		if (isalpha(a))
		{
			printf("Error\n");
			return (1);
		}
		sum += a;
	}
		printf("%d \n", sum);
		return (0);
	}
	printf("0\n");
	return (1);
}
