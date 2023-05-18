#include "lists.h"

/**
 * sum_dlistint - adds all the data of a dlistint_t linked list
 * @head: points to the beginning of the linked list
 *
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int adds = 0;

	while (head != NULL)
	{
		adds += head->n;
		head = head->next;
	}
	return (adds);
}
