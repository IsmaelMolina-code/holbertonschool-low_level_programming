#include "main.h"

/**
 *print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{

char c;

for (c = 'a'; c <= 'z'; c++)
{
	while (c < 10)
	{
	_putchar(c);
	}
	c++;
}

	_putchar('\n');

}
