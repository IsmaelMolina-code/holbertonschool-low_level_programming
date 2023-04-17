#include <stdio.h>

/**
 * main - program to print the number of arguments
 *
 * @argc: integer
 *
 * @argv: dir to a table
 *
 * Return: 0 (Succes)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);

	return (0);
}
