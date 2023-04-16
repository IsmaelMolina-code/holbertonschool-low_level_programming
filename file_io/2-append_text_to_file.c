#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 *
 * @filename: pointer to file
 *
 * @text_content: text to append
 *
 * Return: 1 at a success, -1 at a fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdopen, fdwrite, text_len = 0;

	if (filename == NULL)
		return (-1);

	fdopen = open(filename, O_WRONLY | O_APPEND);

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
