#include "hash_tables.h"

/**
 * hash_table_get - function value key
 * @ht: hash table
 * @key: key
 * Return: NULL , key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int j;
	hash_node_t *count;

	if (ht == NULL || key == NULL)
		return (NULL);
	j = key_index((const unsigned char *)key, ht->size);
	count = ht->array[j];
	while (count != NULL)
	{
		if (strcmp(count->key, key) == 0)
			return (count->value);
		count = count->next;
	}
	return (NULL);
}
