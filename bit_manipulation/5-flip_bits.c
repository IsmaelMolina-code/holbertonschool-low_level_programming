#include "main.h"
/**
 * flip_bits - function to return the number of bits you'll need to flip to get
 * from one number to other
 * 
 * @n: number
 * 
 * @m: flip to another number
 * 
 * Return: Nothing.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result)
	{
		count += result & 1;
		result >>= 1;
	}

	return (count);
}
