#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table
 * Return: elements
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j = 0;
	unsigned int k = 0;
	hash_node_t *count;

	if (ht == NULL)
		return;
	printf("{");
	while (j < ht->size)
	{
		count = ht->array[j];
		while (count != NULL)
		{
			if (k == 1)
				printf(", ");
			printf("'%s': '%s'", count->key, count->value);
			k = 1;
			count = count->next;
		}
		j++;
	}
	printf("}\n");
}
