#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int b = 0;
	hash_node_t *node = NULL;

	if (!ht)
		return;
	printf("{");
	for (; b < ht->size; b++)
	{
		if (ht->array[b] == NULL && !node)
			continue;
		if (!node)
			node = ht->array[b];
		printf("'%s': '%s'", node->key, node->value);

		node = node->next;
		while (!node && b < ht->size)
			node = ht->array[++b];
		if (node)
			printf(", ");
	}
	printf("}\n");
}
