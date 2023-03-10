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
	int a, b;
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atol(argv[1]);
	b = atol(argv[2]);

	printf("%d\n", a * b);
	return (0);

}
