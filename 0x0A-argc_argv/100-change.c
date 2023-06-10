#include <stdio.h>
#include <stdlib.h>
int makeChange(int a);
/**
 * main - prints the minimun number of coins to make change
 * @argc: argument counter
 * @argv: argument vars
 * Return: 0- success, 1- error
 */

int main(int argc, char *argv[])
{
	int a;
	int change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("0\n");
		return (1);
	}
	change = makeChange(a);
	printf("%d\n", change);
	return (0);
}
/**
 *makeChange- function that calculates change
 *coins: 25, 10, 5, 2, 1
 *@a: the number to calculate change
 *Return: minimum number of coins needed to make change
 *
*/
int makeChange(int a)
{
	int change = 0;

	while (a > 0)
	{
		if (a >= 25)
		{
			change++;
			a -= 25;
		}
		else if (a >= 10)
		{
			change++;
			a -= 10;
		}
		else if (a >= 5)
		{
			change++;
			a -= 5;
		}
		else if (a >= 2)
		{
			change++;
			a -= 2;
		}
		else
		{
			change++;
			a -= 1;
		}
	}
	return (change);
}
