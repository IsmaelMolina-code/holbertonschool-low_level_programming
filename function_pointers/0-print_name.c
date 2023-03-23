#include "function_pointers.h"

/**
 * print_name - the function pointer to print a name
 *
 * @f: pointer to function
 *
 * @name: the name to be printed
 *
 * Return: the name/text that is saved in the pointer to the function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		(*f)(name);
}
