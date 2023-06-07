#include "main.h"
int find_prime(int n, int i);
/**
 * is_prime_number- finds whether a number is prime or not
 * @n: the number in question
 * Return: 1 if n is prime and 0 if n is not prime
*/
int is_prime_number(int n)
{
	return (find_prime(n, 2));
}

/**
 * find_prime- finds the prime number of a given number
 * @n: the number in question
 * @i: the increment
 * Return: 1 if number is prime and 0 otherwise
*/
int find_prime(int n, int i)
{
	if (n < 2)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	if (n % i == 0)
		return (0);
	if (i <= n / 2)
		return (1);
	return (find_prime(n, i + 1));
}
