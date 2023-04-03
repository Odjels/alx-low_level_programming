#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list
 * @head: a double pointer of lists
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *next_node;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next_node = (*head)->next_node;
		free(*head);
		*head = next_node;
	}
}