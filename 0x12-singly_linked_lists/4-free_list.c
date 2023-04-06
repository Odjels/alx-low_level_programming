#include "lists.h"

/**
 * free_list - frees the list
 * @head: head to the linked list.
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *N_node;

	while ((N_node = head) != NULL)
	{
		head = head->next;
		free(N_node->str);
		free(N_node);
	}
}
