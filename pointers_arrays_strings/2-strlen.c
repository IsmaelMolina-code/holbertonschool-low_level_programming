#include "main.h"
#include <string.h>

/**
 * _strlen - function to swap numbers value.
 *
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i);
	return (i);
}
