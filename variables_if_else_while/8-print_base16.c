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

int letter = 48;
int letter2 = 97;

while (letter <= 57)
{
	putchar(letter);
	letter++;
}
while (letter2 <= 102)
{
	putchar(letter2);
	letter2++;
}

	putchar('\n');

return (0);
}
