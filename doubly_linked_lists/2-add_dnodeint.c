#include "lists.h"

/**
 * add_dnodeint - adding a new node to a dlistint_t list
 *
 * @head: pointer to pointer of the head of the list
 *
 * @n: the new node
 *
 * Return: the addition of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node = malloc(sizeof(dlistint_t));

	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->prev = NULL;
	n_node->next = *head;

	if (*head)
		(*head)->prev = n_node;

	*head = n_node;

	return (*head);
}
