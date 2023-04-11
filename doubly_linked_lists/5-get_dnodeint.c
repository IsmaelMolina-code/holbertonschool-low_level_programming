#include "lists.h"

/**
 * get_dnodeint_at_index - this function return the pointer to 9th node
 * end
 *
 * @head: a pointer to head pointer
 *
 * @index: the node index
 *
 * Return: the number of nodes
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);

		i++;
		head = head->next;
	}

	return (NULL);
}
