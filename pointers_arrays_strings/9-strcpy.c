#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strcpy - function to swap numbers value.
 *
 * @dest: a
 *
 * @src: b
 *
 * Return: _strcpy
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
