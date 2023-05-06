#include "main.h"

/**
 * string_nconcat - function to concatenate two strings.
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * @n: number of bytes
 *
 * Return: the two strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *two_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);

	two_str = malloc((strlen(s1) + n) * sizeof(char) + 1);

	if (two_str == NULL)
		return (NULL);

	for (len1 = 0; s1[len1]; len1++)
		two_str[len1] = s1[len1];

	for (len2 = 0; len2 < n; len2++, len1++)
		two_str[len1] = s2[len2];
	two_str[len1] = '\0';

	return (two_str);
}
