#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - this deletes the node at the specific index
 * @head: double points to the linked list
 * @index: index for the deleted node
 *
 * Return: 1 on success.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *now;
	unsigned int a;

	if (head == NULL || *head == NULL)
		return (-1);
	now = *head;
	if (index == 0)
	{
		*head = now->next;
		if (now->next != NULL)
		{
			now->next->prev = NULL;
		}
		free(now);
		return (1);
	}
	a = 0;

	while (a < index)
	{
		if (now->next == NULL)
			return (-1);
		now = now->next;
		a++;
	}
	now->prev->next = now->next;
	if (now->next != NULL)
		now->next->prev = now->prev;
	free(now);
	return (1);
}
