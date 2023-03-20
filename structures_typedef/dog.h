#ifndef dogh
#define dogh

/**
 * struct dog - The structure for defining dog's data
 *
 * @name: name of the dog
 *
 * @age: age of the dog
 *
 * @owner: owner of the dog
 *
 * Return: nth
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
