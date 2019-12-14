#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: link to node
 * @index: nth index
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int a = 0;
dlistint_t *delete = *head;
if (delete == NULL)
return (-1);
if ((index == 0) && (delete->next != NULL) && (delete->prev == NULL))
{
delete = delete->next;
delete->prev = NULL;
*head = delete;
return (1);
}
else if (delete->next != NULL)
{
for (a = 0; a < index - 1; a++)
delete = delete->next;
delete->next = delete->next->next;
delete->next->prev = delete;
return (1);
}
return (-1);
}
