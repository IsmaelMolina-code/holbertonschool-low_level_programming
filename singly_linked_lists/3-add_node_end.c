#include "lists.h"

/**
 * add_node_end - prints all the elements of a list_t list
 *
 * @head: pointer to pointer of the head of the list
 *
 * @str: the str to duplicate
 *
 * Return: the addition of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node = malloc(sizeof(list_t));
	list_t *actual = *head;

	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);
	n_node->len = strlen(str);

	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}

	while (actual->next != NULL)
		actual = actual->next;

	actual->next = n_node;

	return (n_node);
}
