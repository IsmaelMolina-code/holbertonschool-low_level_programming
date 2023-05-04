#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 *
 * @separator: pointer to be printed between n
 *
 * @n: n(quantity) to be printed 
 *
 * Return: .
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list m;

	va_start(m, n);

	for (; i < n; i++)
	{
		if (i == n - 1 || separator != NULL)
			printf("%d", va_arg(m, int));
		else
			printf("%d%s", va_arg(m, int), separator);
	}
	printf("\n");

	va_end(m);
}
