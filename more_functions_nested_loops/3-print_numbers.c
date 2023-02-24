#include "main.h"

/**
 * print_numbers - Entry point
 *
 * @a: es un int
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int n;
	for (n = 48; n <= 57; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
