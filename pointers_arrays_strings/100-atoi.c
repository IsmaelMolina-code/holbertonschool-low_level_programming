#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _atoi - function that changes a string to an integer.
 *
 * @s: a
 *
 * Return: an integer
 */

int _atoi(char *s)
{
	int sign = 1, res = 0;

	const char *p = s;

	while (isspace(*p))
	{
		p++;
	}

	if (*p == '-' || *p == '+')
	{
		sign = (*p++ == '-') ? -1 : 1;
	}

	while (isdigit(*p))
	{
		res = res * 10 + (*p++ - '0');
	}

	return (sign * res);
}
