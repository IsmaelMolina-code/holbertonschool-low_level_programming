#include <stdio.h>
#include "dog.h"

/**
 * print_dog - the function to print a new dog
 *
 * @d: the pointer to the structure
 *
 * Return: the new values
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
}
