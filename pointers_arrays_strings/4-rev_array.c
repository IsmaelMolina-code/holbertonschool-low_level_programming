#include "main.h"

/**
 * reverse_array - function to reverse the content of an array of integers.
 *
 * @a: an int
 *
 * @n: another int
 *
 * Return: void _reverse_array function
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		if (a[i] != a[j])
		{
			int num = a[i];

			a[i] = a[j];
			a[j] = num;
		}
		i++;
		j--;
	}
}
