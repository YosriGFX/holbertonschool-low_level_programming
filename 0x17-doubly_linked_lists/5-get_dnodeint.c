#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: list
 * @index: nth number
 * Return: value or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
for (i = 0; head != NULL; i++)
{
if (index == i)
{
return (head);
}
head = (*head).next;
}
return (NULL);
}
