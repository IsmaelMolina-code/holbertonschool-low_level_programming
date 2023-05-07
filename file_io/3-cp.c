#include "main.h"

/**
 * main - check the code
 *
 * @ac: argc
 *
 * @av: argv
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	char buffer[1024];
	int fd1, fd2, nread, nwrite;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd1 = open(av[1], O_RDONLY);

	if (fd1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd2 = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);

	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close(fd1);
		exit(99);
	}

	while ((nread = read(fd1, buffer, 1024)) >= 1)
	{
		nwrite = write(fd2, buffer, nread);
		if (nwrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}

	if (nread == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	if (close(fd1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);

	if (close(fd2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);

	return (0);
}

