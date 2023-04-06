#include "lists.h"

/**
 * add_nodeint:  adds the node to the beginning of the linked list
 * @head: pointers to the head of the lists
 * @n: integers used
 *
 * Return: The address to the new node
 */

 listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
