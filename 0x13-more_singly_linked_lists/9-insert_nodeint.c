#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserting a new node at a given postion
 * @head: double pointer
 * @idx: index of the node
 * @n: new node value
 *
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int c;
	listint_t *temp, *new_node;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (c = 0; c < idx - 1 && temp != NULL; c++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);

	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
