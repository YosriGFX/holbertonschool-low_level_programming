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
dlistint_t *temp = NULL;
if (idx == 0)
{
add_dnodeint(h, n);
return (temp);
}
else
{
dlistint_t *temp = *h;
dlistint_t *new = malloc(sizeof(dlistint_t));
unsigned int a;
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
return (temp);
}
