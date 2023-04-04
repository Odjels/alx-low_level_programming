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
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
