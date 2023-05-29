#include "search_algos.h"

/**
 *binary_search-searches value in sorted array of ints using Binary search algo
 *
 * @array: pointer to first element
 *
 * @size: number of elements in array
 *
 * @value: value to search for
 *
 * Return:  index where value is located
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid = 0, i = 0;

	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");

		for (i = left; i < right; i++)
			printf("%d, ", array[i]);

		printf("%d\n", array[i]);

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
