#include "main.h"

/**
 * string_toupper - function to change all lowercase letters to uppercase.
 *
 * @str: to the pointer
 *
 * Return: str function
 */

char *string_toupper(char *str)
{
	char *p = str;

	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p = (*p - 'a') + 'A';
		}
			p++;
	}
	return (str);
}
