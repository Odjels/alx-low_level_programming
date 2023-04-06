#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - add node to the end ofthe list.
  *
  * @head: head to the pointer
  * @n: int add 
  * Return: the added node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tem;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
	*head = new_node;
		return (new_node);
	}
	tem = *head;
	while (tem->next != NULL)
	{
		tem = tem->next;
	}
	tem->next = new_node;
	return (new_node);
}
