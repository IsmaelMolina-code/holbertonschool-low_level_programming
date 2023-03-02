#include "main.h"

/**
 * _strncat - function to concatenate two strings.
 *
 * @dest: first string
 *
 * @src: second string
 *
 * @n: the int value
 *
 * Return: _strcat function
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int i = 0;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0' && i < n)
	{
		*p++ = *src++;
		i++;
	}
	*p = '\0';
	return (dest);
}
