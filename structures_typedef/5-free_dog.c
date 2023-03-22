#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - the function to free the memory where dog is allocated
 *
 * @d: pointer to the structure
 *
 * Return: free the dog
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
