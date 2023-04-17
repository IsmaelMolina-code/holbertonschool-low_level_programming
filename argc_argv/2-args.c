#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 *
 * @argc: integer
 *
 * @argv: dir to a table
 *
 * Return: 0 (Succes)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
