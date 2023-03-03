#include "main.h"

/**
 * cap_string - function to swap numbers value.
 *
 * @str: the string
 *
 * Return: cap_string function
 */

char *cap_string(char *str)
{
	int i;
	int nt = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (nt && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			nt = 0;
		} else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
		{
			nt = 1;
		} else
		{
			nt = 0;
		}
	}

	return (str);
}
