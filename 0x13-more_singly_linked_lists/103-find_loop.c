#include "lists.h"
/**
 * find_listint_loop - find the loop contained
 *                     in a linked list
 * @head : pointer to the head of the linked lists
 * Return: pointer to the node where the loop starts,
 *         or NULL - if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *nodea, *nodeb;

if (head == NULL || head->next == NULL)
return (NULL);

nodea = head->next;
nodeb = (head->next)->next;

while (nodeb)
{
if (nodea == nodeb)
{
nodea = head;

while (nodea != nodeb)
{
nodea = nodea->next;
nodeb = nodeb->next;
}

return (nodea);
}

nodea = nodea->next;
nodeb = (nodeb->next)->next;
}

return (NULL);
}
