#include "main.h"

/**
 * _memset - a function that print a string in reverse
 *
 * @s: the char pointer
 *
 * @b: the char to fill
 *
 * @n: the area to fill
 *
 * Return: a
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;
	char *pointer = s;

	while (count < n)
	{
		pointer[count] = b;
		count++;
	}
	return (pointer);
}
