#include "lists.h"

/**
 * add_dnodeint - prints all the elements of a dlistint_t list
 *
 * @head: pointer to pointer of the head of the list
 *
 * @str: the str to duplicate
 *
 * Return: the addition of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node = malloc(sizeof(dlistint_t));

	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = *head;

	*head = n_node;

	return (n_node);
}
