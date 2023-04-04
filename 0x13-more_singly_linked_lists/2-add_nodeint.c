#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a linked list
 * @head: pointers to the head of the list
 * @n: integers to be used as content
 *
 * Return: The address of the newly added node
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
