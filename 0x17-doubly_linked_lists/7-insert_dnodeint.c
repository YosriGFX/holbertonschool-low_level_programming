#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index
 * @h: pointer to list
 * @idx: index
 * @n: int
 * Return: the address of the new node, or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int count = 0, a;
if (*h != NULL)
{
dlistint_t *temp = *h;
while (temp)
{
temp = temp->next;
count++;
}
if (idx == 0)
{
add_dnodeint(h, n);
}
else if (idx == count)
{
add_dnodeint_end(h, n);
}
else if (idx < count)
{
dlistint_t *temp = *h;
dlistint_t *new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
for (a = 0; temp != NULL; a++)
{
if (idx == a + 1)
{
new->n = n;
new->next = temp->next;
new->prev = temp;
if (temp->next != NULL)
temp->next->prev = new;
temp->next = new;
return (new);
}
temp = temp->next;
}
}
}
return (NULL);
}
