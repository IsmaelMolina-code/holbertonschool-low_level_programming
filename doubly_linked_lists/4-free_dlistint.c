#include "lists.h"

/**
 * free_dlistint - prints all the elements of a list_t list
 *
 * @head: pointer to pointer of the head of the list
 *
 * Return: the addition of new node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *actual = head;

	while (actual != NULL)
	{
		actual = actual->next;

		free(head);
		head = actual;
	}
}
