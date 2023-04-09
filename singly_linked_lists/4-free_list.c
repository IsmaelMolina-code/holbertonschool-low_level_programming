#include "lists.h"

/**
 * free_list - prints all the elements of a list_t list
 *
 * @head: pointer to pointer of the head of the list
 *
 * Return: the addition of new node
 */

void free_list(list_t *head)
{
	if (head == NULL)
	{
		free(head);
	}
}
