#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{

char c = 'a';

while (c > 96 && c <= 122)
{
	_putchar(c);
	c++;
}
	_putchar('\n');

}
