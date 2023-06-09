#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int b = 0;
	hash_node_t *nod = NULL;

	if (!ht)
		return;
	printf("{");
	for (; b < ht->size; b++)
	{
		if (ht->array[b] == NULL && !nod)
			continue;
		if (!nod)
			nod = ht->array[b];
		printf("'%s': '%s'", nod->key, nod->value);

		nod = nod->next;
		while (!nod && b < ht->size)
			nod = ht->array[++b];
		if (nod)
			printf(", ");
	}
	printf("}\n");
}
