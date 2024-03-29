#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Prints last digit of a number
 *
 * Description: last digit
 *
 * @n: The number to be treated
 *
 * Return: Value of the last digit of number
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
