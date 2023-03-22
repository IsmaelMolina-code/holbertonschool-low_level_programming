#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day
 *
 * Return: the minutes and hours starting from 00:00
 */

void jack_bauer(void)
{
	int hours = 0, minutes = 0;

	for (; hours <= 23; hours++)
	{
		for (; minutes <= 59; minutes++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
		}
	}
}
