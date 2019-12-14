#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: list
 * @index: nth number
 * Return: value or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0, a;

if (head == NULL)
return (NULL);
dlistint_t *counter = head;
dlistint_t *grap = head;
while (counter)
{
counter = counter->next;
count++;
}
if (count < index)
{
return (NULL);
}
else
{
for (a = 0; a < index; a++)
grap = grap->next;
return (grap);
}
}
