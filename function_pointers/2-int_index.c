#include "function_pointers.h"

/**
 * int_index - function to search an integer
 *
 * @array: array
 *
 * @size: size
 *
 * @cmp: pointer to the function
 *
 * Return: the index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp != 0)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
