#include "lists.h"
/**
 * get_nodeint_at_index - node get.
 * @head: pointer.
 * @index: index
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int a;
if (head == NULL)
return (NULL);
for (a = 0; a < index; a++)
{
head = head->next;
if (head == NULL)
return (NULL);
}
return (head);
}
