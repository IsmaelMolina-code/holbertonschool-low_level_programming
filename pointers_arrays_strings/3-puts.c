#include "main.h"
#include <string.h>

/**
 * _puts - function to swap numbers value.
 *
 * @str: the puts
 *
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
