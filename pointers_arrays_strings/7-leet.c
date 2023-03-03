#include "main.h"

/**
 * leet - function that encodeds a string to 1337.
 *
 * @s: a
 *
 * @c: b 
 *
 */

char *leet(char *s)
{
       	static char result[1000];
	int i, j;
	char c;

	for (i = 0, j = 0; s[i] != '\0'; i++)
	{
	c = s[i];

 	if (c == 'a' || c == 'A')
	{
		result[j++] = '4';
        } else if (c == 'e' || c == 'E')
	{
		result[j++] = '3';
        } else if (c == 'o' || c == 'O')
	{
		result[j++] = '0';
        } else if (c == 't' || c == 'T')
	{
		result[j++] = '7';
        } else if (c == 'l' || c == 'L')
	{
		result[j++] = '1';
        } else
	{
		result[j++] = c;
	}
	if (j >= 1000)
	{
		break;
	}
	}

	result[j] = '\0';
	return result;
}
