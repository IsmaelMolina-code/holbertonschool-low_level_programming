#include "main.h"

/**
 * _puts_recursion - function to print a string in reverse with recursion.
 *
 * @s: the char
 *
 * Return: printing in reverse function
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
