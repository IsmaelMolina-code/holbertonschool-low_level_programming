#include "main.h"

/**
 * _strcmp - function to compare two strings.
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: _strcmp function
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
