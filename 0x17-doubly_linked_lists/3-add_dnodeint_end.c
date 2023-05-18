#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds the node to the end of the linked list
 * @head: double points to the beginning of the linked list
 * @n: value to be added to new node
 *
 * Return: points to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *now, *temp;

	if (head == NULL)
		return (NULL);
	now = malloc(sizeof(dlistint_t));
	if (now == NULL)
		return (NULL);
	now->n = n;
	now->next = NULL;
	if (*head == NULL)
	{
		now->prev = NULL;
		*head = now;
		return (now);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = now;
	now->prev = temp;
	return (now);
}
