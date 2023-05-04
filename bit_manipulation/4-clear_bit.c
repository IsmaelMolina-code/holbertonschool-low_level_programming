#include "main.h"

/**
 * clear_bit - function to set the value of a bit to 0 at a given index
 *
 * @index: the index position
 *
 * @n: pointer to a number
 *
 * Return: 1 if Success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63 || !n)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
