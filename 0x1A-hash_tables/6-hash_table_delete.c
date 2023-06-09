#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *nod, *temp;
	unsigned long int b;

	for (b = 0; b < ht->size; b++)
	{
		if (ht->array[b] != NULL)
		{
			nod = ht->array[i]b
			while (nod != NULL)
			{
				temp = nod->next;
				free(nod->key);
				free(nod->value);
				free(nod);
				nod = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
