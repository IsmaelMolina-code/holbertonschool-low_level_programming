#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - the function to free the memory where dog is allocated
 *
 * @d: pointer to the structure
 *
 * @name: name of the dog
 *
 * @age: age of the dog
 *
 * @owner: owner of the dog
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
