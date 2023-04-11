#include "lists.h"

/**
 * sum_dlistint - function tp make n plus n
 *
 * @head: the pointer to the head pointer
 *
 * Return: suma de dlistint_t
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
