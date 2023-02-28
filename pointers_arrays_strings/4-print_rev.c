#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - function to swap numbers value.
 *
 * @s: the puts
 *
 */

void print_rev(char *s)
{
	int leng, g;

	leng = strlen(s);

	for (g = leng - 1; g >= 0; g--)
	{
		_putchar(s[g]);
	}
	_putchar('\n');
}
