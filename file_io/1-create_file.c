#include "main.h"

/**
 * create_file - a
 *
 * @filename: pointer to file
 *
 * @text_content: number of letters
 *
 * Return: 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int fdopen, fdwrite, text_len = 0;

	if (filename == NULL)
		return (-1);

	fdopen = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fdopen == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_len] != '\0')
		text_len++;
	}

	fdwrite = write(fdopen, text_content, text_len);

	if (fdwrite == -1)
	{
		close(fdopen);
		return (-1);
	}

	close(fdopen);
	return (1);
}
