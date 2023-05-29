#include "search_algos.h"

/**
 *linear_search -searches a value in array of ins using the Linear search algo
 *
 * @array: pointer of first element
 *
 * @size: number of elements in array
 *
 * @value: value to search for
 *
 * Return: first index where value is located
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
