#include "main.h"
#include <string.h>

/**
 * _strlen - function to swap numbers value.
 *
 * @s: the counter
 *
 * Return: i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	i++;
	}

	return (i);
}
