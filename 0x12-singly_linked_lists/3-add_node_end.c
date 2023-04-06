#include "lists.h"

/**
 * add_node_end:  adds a node to the end
 * of the list.
 * @head: head to the linked list.
 * @str: string to store the list.
 * Return: address to the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;
	size_t j;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (j = 0; str[j]; j++)
		;

	new_node->len = j;
	new_node->next = NULL;
	current_node = *head;

	if (current_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}

	return (*head);
}
