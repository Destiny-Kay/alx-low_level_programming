#include <stdio.h>
#include "main.h"
/**
 *main- returns the number of arguments
 *@argc: argument counter
 *@argv: arguments
 *Return: Always 0 success
 *
 */
int main(int argc, int *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
