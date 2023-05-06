#include "main.h"

/**
 * str_concat - function to concatenate two strings
 *
 * @s1 : first string
 *
 * @s2: second string
 *
 * Return: Always 0 Success
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *two_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	two_str = malloc((strlen(s1) + strlen(s2)) * sizeof(char) + 1);

	if (two_str == NULL)
		return (NULL);
	else
	{
		for (len1 = 0; s1[len1]; len1++)
			two_str[len1] = s1[len1];
		for (len2 = 0; s2[len2]; len2++, len1++)
			two_str[len1] = s2[len2];
	}

	return (two_str);
}
