#include "main.h"

/**
 * _isdigit - Entry point
 *
 * @c: The character to print
 *
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{

while (c >= 0 && c <= 9)
{
	c++;
	return (1);
}
	return (0);
}
