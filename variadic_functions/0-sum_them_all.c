#include "variadic_functions.h"

/**
 * sum_them_all - function to sum parameters
 *
 * @n: n(quantity) parameters to sum
 *
 * Return: the sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = 0;

	va_list m;

	va_start(m, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(m, int);
	}

	va_end(m);

	return (sum);
}
