#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table
 * @key: key.
 * @value: value associated
 * Return: (1) (0)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_nd = NULL;
	unsigned long int index = 0;

	if (ht == NULL || *key == '\0' || key == NULL || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		for (new_nd = ht->array[index]; new_nd; new_nd = new_nd->next)
		{
			if (strcmp(new_nd->key, key) == 0)
			{
				free(new_nd->value);
				new_nd->value = strdup(value);
				return (1);
			}
		}
	}

	new_nd = malloc(sizeof(hash_node_t));

	if (new_nd == NULL)
		return (0);

	new_nd->key = strdup(key);
	new_nd->value = strdup(value);
	new_nd->next = ht->array[index];
	ht->array[index] = new_nd;

	return (1);
}
