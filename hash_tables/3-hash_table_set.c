#include "hash_tables.h"

/**
 * hash_table_set - this function adds an element to the hashtable
 *
 * @ht: hashtable to add into
 *
 * @key: The key(cant be empty string)
 *
 * @value: value associated with the key,must be dup and can be empty
 *
 * Return: 1 in case of succeed or 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *keymatch = ht->array[index];
	hash_node_t *newpair;

	if (!ht || !key || !value || !*key)
		return (0);

	if (keymatch != NULL)
	{
	while (keymatch != NULL)
	{
		if (strcmp(keymatch->key, key) == 0)
		{
			keymatch->value = strdup(value);
			return (1);
		}

		keymatch = keymatch->next;
	}
	}
	newpair = malloc(sizeof(hash_node_t));

	if (newpair == NULL)
		return (0);

	newpair->key = strdup(key);
	newpair->value = strdup(value);
	newpair->next = NULL;

	if (ht->array[index] != NULL)
		newpair->next = ht->array[index];

	ht->array[index] = newpair;

	return (1);
}
