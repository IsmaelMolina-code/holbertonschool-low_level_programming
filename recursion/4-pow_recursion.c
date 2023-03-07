#include "main.h"

/**
 * _pow_recursion - function to return the raised of a power number.
 *
 * @x: a number
 *
 * @y: another number
 *
 * Return: returning raised power number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	} else if (y == 0)
	{
		return (1);
	} else
		return (x * _pow_recursion(x, y - 1));
}
