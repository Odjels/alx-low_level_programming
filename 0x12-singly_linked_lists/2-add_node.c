#include "lists.h"
/**
 * add_node:  adds new node to the beginning
 * of the list.
 * @head: head of the linked lists.
 * @str: string to store the lists.
 * Return: address to the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t j;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (j = 0; str[j]; j++)
		;

	new_node->len = j;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
