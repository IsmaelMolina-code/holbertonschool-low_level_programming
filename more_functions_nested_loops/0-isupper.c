#include "main.h"

/**
 * _isupper - Entry point
 *
 * @c: The character to print
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{

c = 65;

	while (c > 65 && c <= 90)
	{
		_putchar(c);
		c++;
	}
		return (1);
		_putchar('\n');

}
