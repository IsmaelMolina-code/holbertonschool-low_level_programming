#include "main.h"

/**
 * _strpbrk - a function that print a string in reverse
 *
 * @s: the char pointer
 *
 * @accept: the chars to find
 *
 * Return: a
 */

char *_strpbrk(char *s, char *accept)
{
	int count = 0, count2 = 0;
	char *pointer;

	while (s[count])
	{
		while (accept[count2])
		{
			if (s[count] == accept[count2])
			{
				pointer = &s[count];
				return (pointer);
			}
			count2++;
		}
		count++;
		count2 = 0;
	}

	return (0);
}
