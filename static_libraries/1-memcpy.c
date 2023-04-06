#include "main.h"

/**
 * _memcpy - a function that print a string in reverse
 *
 * @src: the char pointer source
 *
 * @dest: the char pointer to fill
 *
 * @n: the area to fill
 *
 * Return: a
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;
	char *pointer = src;

	while (count < n)
	{
		dest[count] = pointer[count];
		count++;
	}
	return (dest);
}
