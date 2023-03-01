#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_array - function to swap numbers value.
 *
 */

void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		printf("%d", a[num]);

		if (num != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
