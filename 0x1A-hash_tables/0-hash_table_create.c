#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to newly created hash table on success or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/* define new hash table */
	hash_table_t *hashT = malloc(sizeof(hash_table_t));

	if (!hashT)
		return (NULL);

	hashT->size = size;
	/* define array of key value pairs (hash nodes) */
	hashT->array = malloc(sizeof(hash_node_t *) * size);

	if (hashT->array == NULL)
		return (NULL);

	return (hashT);
}
