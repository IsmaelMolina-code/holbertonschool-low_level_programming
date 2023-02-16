#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

char c = 'a';

while (c > 96 && c <= 127)
{
	putchar(c);
	c++;
}

return (0);
}
