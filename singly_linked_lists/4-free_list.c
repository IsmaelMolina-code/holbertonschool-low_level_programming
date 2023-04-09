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
	list_t *actual = head;

	while (actual != NULL)
	{
		list_t *next = actual->next;

		free(actual->str);
		free(actual);
		actual = next;
	}
}
