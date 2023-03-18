#include "main.h"

/**
 * create_array - Creating a pointer to an array with dynamic memory.
 *
 * @size: size of ar
 *
 * @c: the char to be printed
 *
 * Return: a pointer to the array
 *
 */

char *create_array(unsigned int size, char c)
{
	char *ar = NULL;

	unsigned int i = 0;

	ar = malloc(size * sizeof(char));

	if (size == 0 || ar == NULL)
	{
		return (NULL);
	}

	for (; i < size; i++)
	{
		ar[i] = c;
	}

	return (ar);
}
