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

	for (; i < len2; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
