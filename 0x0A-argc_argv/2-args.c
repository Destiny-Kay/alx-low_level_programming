#include <stdio.h>
#include "main.h"

/**
 *main-prints out all arguments gven to it
 *@argc: argument counter
 *@argv: arguments
 *Return: Always 0 success
 */

int main(int argc, char *argv[])
{
	int counter = 0;

	if (argc > 0)
	{
		while (counter < argc)
		{
			printf("%s\n", argv[counter]);
			counter++;
		}
	}
	return (0);
}
