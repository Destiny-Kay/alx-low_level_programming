#include "main.h"

int prime(int n, int i);

/**
 *is_prime_number- checks whether a number is prime
 *@n: integer
 *Return: 1 if if prime, 0 if is not prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, n - 1));
}

int prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (prime(n, i - 1));
}
