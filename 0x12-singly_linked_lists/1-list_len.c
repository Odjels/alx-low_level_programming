#include "lists.h"
/**
 * list_len - return the numbers of the elements in a list.
 * @h: singly linked lists.
 * Return: numbers of the elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
