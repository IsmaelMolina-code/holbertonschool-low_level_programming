#include "main.h"
#include <string.h>

/**
 * puts_half - function to swap numbers value.
 *
 * @str: the puts
 *
 */

void puts_half(char *str)
{
	int i = 0;
	int len = strlen(str);
	int len2 = len / 2;
	int fs = len2;

	if (len % 2 != 0)
	{
		fs++;
	}

	for (i = fs; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
