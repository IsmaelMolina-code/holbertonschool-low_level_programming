#include "lists.h"

/**
 * add_dnodeint_end - prints all the elements of a list_t list
 *
 * @head: pointer to pointer of the head of the list
 *
 * @n: the str to duplicate
 *
 * Return: the addition of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node = malloc(sizeof(dlistint_t));
	dlistint_t *actual = *head;

	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
	{
		n_node->prev = NULL;
		*head = n_node;
		return (n_node);
	}

	while (actual->next != NULL)
		actual = actual->next;

	n_node->prev = actual;
	actual->next = n_node;

	return (actual->next);
}
