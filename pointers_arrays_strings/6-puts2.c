#include "main.h"
#include <string.h>

/**
 * puts2 - function to swap numbers value.
 *
 * @str: the puts
 *
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
