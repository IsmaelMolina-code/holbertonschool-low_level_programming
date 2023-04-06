#include "main.h"

/**
 * comp - function
 *
 * @n: int
 *
 * @i: int
 *
 * Return: 0
 */

int comp(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);

	return (comp(n, i + 1));
}

/**
 * _sqrt_recursion - function
 *
 * @n: int
 *
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	return (comp(n, 1));
}
