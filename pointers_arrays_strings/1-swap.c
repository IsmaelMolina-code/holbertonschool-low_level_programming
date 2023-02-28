#include "main.h"

/**
 * swap_int - function to swap numbers value.
 *
 * @a: return an int
 *
 * @b: return another int
 */

void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}

