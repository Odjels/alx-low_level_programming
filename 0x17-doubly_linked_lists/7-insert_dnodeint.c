#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - inserts a new node at the specific position
 * @h: double points to the beginning of a linked lists
 * @idx: index position for inserting the new node
 * @n: data for the new node
 *
 * Return: points to the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *bab *next, *recent;
	unsigned int a;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		recent = *h;

		for (a = 0; a < idx - 1 && recent != NULL; a++)
			recent = recent->next;

		if (recent == NULL)
			return (NULL);
	}
	bab = malloc(sizeof(dlistint_t));
	if (bab == NULL)
		return (NULL);
	bab->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = bab;
		bab->prev = NULL;
	}
	else
	{
		bab->prev = recent;
		next = recent->next;
		recent->next = new;
	}
	bab->next = next;
	if (bab->next != NULL)
		bab->next->prev = bab;
	return (bab);
}
