#include "lists.h"

/**
 * dlistint_len - this count the number of nodes in the linked list
 * @h: points to the beginning of a linked list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t b;

	for (b = 0; h != NULL; b++)
		h = h->next;
	return (b);
}
