#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: link to node
 * @index: nth index
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int a;
dlistint_t *delete = *head;
if (*head == NULL)
return (-1);
if (index == 0)
{
if ((delete->prev == NULL) && (delete->next != NULL))
{
delete = delete->next;
delete->prev = NULL;
*head = delete;
return (1);
}
else
{
*head = NULL;
return (1);
}
}
else
{
for (a = 0; a < index - 1; a++)
if (delete->next == NULL)
return(-1);
delete = delete->next;
delete->next = delete->next->next;
delete->next->prev = delete;
return (1);
}
return (-1);
}
