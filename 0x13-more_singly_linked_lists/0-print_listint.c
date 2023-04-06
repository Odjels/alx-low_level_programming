#include "lists.h"

/**
 * print_listint: prints the elements of the linked list
 * @h: head of the lists
 *
 * Return: number of the nodes
 */
size_t print_listint(const listint_t *h)
{
	
	const listint_t *cursor = h;
	size_t len = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		len += 1;
		cursor = cursor->next;
	}
	return (len);
}
