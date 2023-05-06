#include "main.h"

/**
 * malloc_checked - function to allocate memory using malloc
 *
 * @b: an unsigned int
 *
 * Return: th epointer
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
