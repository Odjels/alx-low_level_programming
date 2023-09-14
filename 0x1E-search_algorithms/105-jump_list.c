#include "search_algos.h"

/**
 * jump_list - Searching for a value in a sorted list of integers
 *
 * @list: this points to the head of the list to search in.
 * @size: number of nodes in the list.
 * @value: value to search for.
 *
 * Return: If the value is not present or the head is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = sqrt(size), l = 0, r = 0;
	listint_t *node = NULL;

	if (!list)
		return (NULL);

	while (r < size && list->n <= value)
	{
		if (list->n == value)
			return (list);

		l = r;
		r += jump;

		while (list->next && list->index < r)
			list = list->next;

		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
	}

	node = (listint_t *) list;
	printf("Value found between indexes [%lu] and [%lu]\n", l, r);

	while (node && l <= node->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		if (node->n == value)
			return (node);
		node = node->next;
	}

	return (NULL);
}
