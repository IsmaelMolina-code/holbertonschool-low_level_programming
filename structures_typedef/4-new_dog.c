#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - the function to create a new dog
 *
 * @name: name of the dog
 *
 * @age: age of the dog
 *
 * @owner: owner of the dog
 *
 * Return: the variable of type struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i;
	int conlen = 0;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	for (; name[conlen]; conlen++)
		;

	dog->name = malloc(conlen + 1);

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; i <= conlen; i++)
	{
		dog->name[i] = name[i];
	}

	dog->age = age;

	for (; owner[conlen]; conlen++)
		;

	dog->owner = malloc(conlen + 1);

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i <= conlen; i++)
	{
		dog->owner[i] = owner[i];
	}
	return (dog);

}
