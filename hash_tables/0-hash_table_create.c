#include "hash_tables.h"

/**
 * hash_table_create - this function creates a hashtable
 *
 * @size: The size of the array
 *
 * Return: pointer to the hashtable
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (size == 0)
		return (NULL);

	if (!table)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));

	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	return (table);
}
