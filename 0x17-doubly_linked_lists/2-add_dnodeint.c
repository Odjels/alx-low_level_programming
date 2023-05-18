#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - this adds the new node at the beginning of the linked list
 * @head: double points to the beginning of the linked list
 * @n: the value to be added to the new node
 *
 * Return: points to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current;

	if (head == NULL)
		return (NULL);
	current = malloc(sizeof(dlistint_t));
	if (current == NULL)
		return (NULL);

	current->n = n;
	current->prev = NULL;
	current->next = *head;
	*head = current;
	if (current->next != NULL)
		(current->next)->prev = current;
	return (current);
}
