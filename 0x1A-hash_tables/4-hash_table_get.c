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
	hash_node_t *aux;

if (ht == NULL)
if (ht->array == NULL)
if (ht->size == 0)
if (key == NULL)
if (strlen(key) == 0)
return (NULL);
	j = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[j];
	while (aux != NULL)
	{
		if (strcmp(aux->key, key) == 0)
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}
