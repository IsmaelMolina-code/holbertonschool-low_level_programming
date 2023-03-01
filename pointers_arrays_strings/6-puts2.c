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
	int i2 = 0;

	while (str[i2] != '\0')
	{
		i2++;
	}

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
