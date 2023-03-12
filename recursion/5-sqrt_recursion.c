#include "main.h"

/**
 * factorial - function to return the factorial of a given number.
 *
 * @n: the number
 *
 * Return: returning factorial function
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 0)
	{
		return (1);
	} else
		return (n * factorial(n - 1));
}
