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

char c = 'A';
char c1 = 'a';

while (c > 64 && c <= 90)
{
	putchar(c);
	c++;
}
while (c1 > 96 && c1 <= 122)
{
        putchar(c1);
        c1++;
}
	putchar('\n');

return (0);
}
