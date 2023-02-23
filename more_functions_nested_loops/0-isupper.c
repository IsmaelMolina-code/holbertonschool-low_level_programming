#include "main.h"

/**
 * _isupper - Entry point
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{

char c = 'A';

while (c > 65 && c <= 90)
{
	_putchar(c);
	c++;
}
	_putchar('\n');

}
