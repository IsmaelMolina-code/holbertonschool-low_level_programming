#include "main.h"

/**
 * _strcat - function to reset a number to 98.
 *
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;
	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
