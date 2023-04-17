#include "main.h"

/**
 * print_square - function that prints a square
 *
 * @size: size of the square
 *
 * This function prints a square using the '#' character. The size of the
 * square is determined by the 'size' parameter.
 */

void print_square(int size)
{
	int row, col;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
			printf("#");

		printf("\n");
	}
}

