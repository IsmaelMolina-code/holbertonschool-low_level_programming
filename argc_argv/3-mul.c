#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to multiply two numbers
 *
 * @argc: integer
 *
 * @argv: dir to a table
 *
 * Return: 0 (Succes)
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", mul);

	return (0);
}
