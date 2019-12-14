#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: list
 * @index: nth number
 * Return: value or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int a;
dlistint_t *grap = head;
for (a = 0; grap != NULL; a++)
{
if (index == a)
return (grap);
grap = grap->next;
}
return (NULL);
}
