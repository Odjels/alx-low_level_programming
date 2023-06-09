#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of new sorted hash table.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int b;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (b = 0; b < size; b++)
		ht->array[b] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_val, *temp;
	char *val_copy;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_copy = strdup(value);
	if (val_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = val_copy;
			return (1);
		}
		temp = temp->snext;
	}

	new_val = malloc(sizeof(shash_node_t));
	if (new_val == NULL)
	{
		free(val_copy);
		return (0);
	}
	new_val->key = strdup(key);
	if (new_val->key == NULL)
	{
		free(val_copy);
		free(new_val);
		return (0);
	}
	new_val->value = val_copy;
	new_val->next = ht->array[indx];
	ht->array[indx] = new_val;

	if (ht->shead == NULL)
	{
		new_val->sprev = NULL;
		new_val->snext = NULL;
		ht->shead = new_val;
		ht->stail = new_val;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_val->sprev = NULL;
		new_val->snext = ht->shead;
		ht->shead->sprev = new_val;
		ht->shead = new_val;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			temp = temp->snext;
		new_val->sprev = temp;
		new_va->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = new_val;
		else
			temp->snext->sprev = new_val;
		temp->snext = new_val;
	}

	return (1);
}

/**
 * shash_table_get - Retrieve the value associated with
 *                   a key in a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->shead;
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *nod;

	if (ht == NULL)
		return;

	nod = ht->shead;
	printf("{");
	while (nod != NULL)
	{
		printf("'%s': '%s'", nod->key, nod->value);
		nod = nod->snext;
		if (nod != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *nod;

	if (ht == NULL)
		return;

	nod = ht->stail;
	printf("{");
	while (nod != NULL)
	{
		printf("'%s': '%s'", nod->key, nod->value);
		nod = nod->sprev;
		if (nod != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *nod, *temp;

	if (ht == NULL)
		return;

	nod = ht->shead;
	while (nod)
	{
		temp = nod->snext;
		free(nod->key);
		free(nod->value);
		free(nod);
		nod = temp;
	}

	free(head->array);
	free(head);
}
