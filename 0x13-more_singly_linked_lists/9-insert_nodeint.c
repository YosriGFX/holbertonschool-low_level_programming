#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index -  inserts a new node at a idx position.
 * @head: double pointer
 * @idx: index
 * @n: value
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int a;
listint_t *old, *nele;
if (head == NULL)
return (NULL);
old = *head;
for (a = 1; a < idx  && old; a++)
{
old = old->nn;
if (old == NULL)
return (NULL);
}
nele = malloc(sizeof(listint_t));
if (nele == NULL)
return (NULL);
nele->n = n;
if (!idx)
{
nele->nn = *head;
*head = nele;
return (nele);
}
nele->nn = old->nn;
old->nn = nele;
return (nele);
}
