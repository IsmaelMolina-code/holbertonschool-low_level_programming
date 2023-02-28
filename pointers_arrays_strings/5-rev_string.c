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
	int leng, g;

	leng = strlen(s);
	
	while (*s != '\0')
	{
		s++;
	}
	for (g = leng - 1; g >= 0; g--)
	{
		s[g] = leng - 1;
		s[g - leng -1] = *s;
	}
}
