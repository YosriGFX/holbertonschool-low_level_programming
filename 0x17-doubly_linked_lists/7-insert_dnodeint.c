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
dlistint_t *temp = *h;
dlistint_t *new = malloc(sizeof(dlistint_t));
unsigned int a;
for (a = 0; temp != NULL; a++)
{
if (idx == (a + 1))
{
new->n = n;
new->next = temp->next;
new->prev = temp;
temp->next = new;
return (new);
}
temp = temp->next;
}
return (NULL);
}
