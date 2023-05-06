#include "main.h"

/**
 * array_range - function to create an array of integers
 *
 * @min: values
 *
 * @max: values
 *
 * Return: the pointer
 */

int *array_range(int min, int max)
{
	int *p, x, y;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * ((max - min) + 1));

	if (p == NULL)
		return (NULL);

	for (x = 0, y = min; y <= max; x++, y++)
		p[x] = y;

	return (p);
}
