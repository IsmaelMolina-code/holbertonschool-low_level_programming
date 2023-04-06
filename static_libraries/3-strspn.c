#include "main.h"

/**
 * _strspn - a function that print a string in reverse
 *
 * @s: the char pointer
 *
 * @accept: the char to find
 *
 * Return: a
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0, count2 = 0, countdif = 0, find = 0;

	while (s[count])
	{
		while (accept[count2])
		{
			if (s[count] == accept[count2])
			{
				find = 1;
				break;
			}
			count2++;
		}
		if (find == 0)
		{
			break;
		}
		countdif++;
		count2 = 0;
		count++;
		find = 0;
	}

	return (countdif);
}
