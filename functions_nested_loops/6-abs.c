#include "main.h"

/**
 * _abs - Entry point
 *
 * @n: The character to print
 *
 * Return: Always 0 (Success)
 */

int _abs(int n)
{

	if (n < 0)
	{
		n = n * (-1);
		return (n);
	}
	else
	{
		return (n);
	}
	return(0);
}
