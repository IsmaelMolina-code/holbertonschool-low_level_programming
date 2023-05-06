#include "main.h"

/**
 * _strdup - function to return a pointer to a newly allocated space in memory
 *
 * @str: string copy
 *
 * Return: Always 0 Success
 */

char *_strdup(char *str)
{
	char *p;
	int s = 0, len;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	p = malloc(sizeof(char) * len + 1);

	if (p == NULL)
		return (NULL);

	for (s = 0; s <= len; s++)
		p[s] = str[s];

	return (p);
}
