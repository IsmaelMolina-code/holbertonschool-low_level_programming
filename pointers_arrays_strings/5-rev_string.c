#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - function to swap numbers value.
 *
 * @s: the puts
 *
 */

void rev_string(char *s)
{
	int leng, g, tmp;

	leng = 0;

	leng = strlen(s);

	while (s[leng] != '\0')
	{
		leng++;
	}
	for (g = 0; g < leng / 2; g++)
	{
		tmp = s[g];
		s[g] = s[leng - g - 1];
		s[leng - g - 1] = tmp;
	}
}
