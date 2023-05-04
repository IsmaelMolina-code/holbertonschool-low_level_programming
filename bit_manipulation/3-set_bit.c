#include "main.h"
/**
 * set_bit - function to set the value of a bit to 1 at a given index
 *
 * @n: pointer to number
 *
 * @index: index of the bit that you want to set
 *
 * Return: 1 if Success.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63 || !n)
		return (-1);

	*n |= 1 << index;
	return (1);
}
