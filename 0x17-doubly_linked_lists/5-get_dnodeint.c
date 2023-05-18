#include "lists.h"

/**
 * get_dnodeint_at_index - find the given node of a linked list
 * @head: points to the beginning of a list
 * @index: index
 * Return: NULL on failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int b;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	b = 0;
	while (b < index;)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		b++;
	}
	return (head);
}
