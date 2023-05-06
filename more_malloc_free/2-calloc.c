#include "main.h"

/**
 * _calloc - function to allocate memory to an array using calloc
 *
 * @nmemb: number of elements
 *
 * @size: of the bytes
 *
 * Return: the pointer.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = calloc(nmemb, size);

	if (p == NULL)
		return (NULL);

	return (p);
}
