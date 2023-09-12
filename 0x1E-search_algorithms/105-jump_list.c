#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers using the Jump
 *              search algorithm.
 * @list: A pointer to the head of the list to search in.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = sqrt(size), left = 0, right = 0;
	listint_t *node = NULL;

	if (!list)
		return (NULL);

	while (right < size && list->n <= value)
	{
		if (list->n == value)
			return (list);

		left = right;
		right += jump;

		while (list->next && list->index < right)
			list = list->next;

		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
	}

	node = (listint_t *) list;
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	while (node && left <= node->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		if (node->n == value)
			return (node);
		node = node->next;
	}

	return (NULL);
}
