#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_val;
	char *val_copy;
	unsigned long int indx, b;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_copy = strdup(value);
	if (val_copy == NULL)
		return (0);

	indx = key_indx((const unsigned char *)key, ht->size);
	for (b = indx; ht->array[b]; b++)
	{
		if (strcmp(ht->array[b]->key, key) == 0)
		{
			free(ht->array[b]->value);
			ht->array[b]->value = val_copy;
			return (1);
		}
	}

	new_val = malloc(sizeof(hash_node_t));
	if (new_val == NULL)
	{
		free(val_copy);
		return (0);
	}
	new_val->key = strdup(key);
	if (new_val->key == NULL)
	{
		free(new_val);
		return (0);
	}
	new_val->value = val_copy;
	new_val->next = ht->array[indx];
	ht->array[indx] = new_val;

	return (1);
}
