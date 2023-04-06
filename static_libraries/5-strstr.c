#include "main.h"
#include <stdlib.h>
/**
 * _strstr - a function that print a string in reverse
 *
 * @haystack: the char pointer
 *
 * @needle: the chars to find
 *
 * Return: a
 */

char *_strstr(char *haystack, char *needle)
{
	int count = 0, count2 = 0, countf = 0, letter = 0;
	char *pointer;
				
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (needle[count])
	{
		count++;
	}
	while (haystack[count2])
	{
		while (haystack[count2+ countf] == needle[countf])
		{
			letter ++;
			if (count == letter)
			{
				pointer= &haystack[count2];
				return (pointer);
			}
			countf++;
		}
		count2++;
		countf = 0;
		letter = 0;
	}

	return (NULL);
}
