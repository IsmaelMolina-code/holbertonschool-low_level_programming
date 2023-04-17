#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - function to print the name
 *
 * @array: name to print
 *
 * @size: function to use
 *
 * @action: actoin
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int cont = 0;

	if (!array && size > 0 && !action)
	{
		for (; cont < size; cont++)
			action(array[cont]);
	}

}
