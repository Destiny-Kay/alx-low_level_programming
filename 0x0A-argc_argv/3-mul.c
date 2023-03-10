#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *main- multiplies two numbers
 *@argc: argument counter
 *@argv: arguments
 *Return: (0)success, (1)error
 *
 */

int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", argv[1] * argv[2]);
	return (0);

}
