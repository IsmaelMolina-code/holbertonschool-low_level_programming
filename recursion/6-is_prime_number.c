#include "main.h"

/**
 * is_prime_rsv - function that checks if it is a prime number.
 *
 * is_prime_number - function to return true if it is a prime number.
 *
 * @n: the number
 *
 * @i: a count
 *
 * Return: returning factorial function
 */

int is_prime_rsv(int n, int i)
{

	if (n <= 1)
	{
		return (0);
	}

	if (i * i > n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (is_prime_rsv(n, i + 1));
}
/**
 * is_prime_number - function to return true if it is a prime number.
 *
 * @n: the number
 *
 * Return: returning factorial function
 */

int is_prime_number(int n)
{
	return (is_prime_rsv(n, 2));
}
