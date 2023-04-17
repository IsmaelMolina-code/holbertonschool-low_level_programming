#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program to add positive numbers
 *
 * @argc: integer
 *
 * @argv: dir to a table
 *
 * Return: 0 (Succes)
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
