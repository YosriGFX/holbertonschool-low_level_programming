#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node.
 * @head: double pointer
 * @n: integer
 * Return: address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nele;
listint_t *h;
if (head == NULL)
return (NULL);
nele = malloc(sizeof(listint_t));
if (nele == NULL)
return (NULL);
nele->n = n;
nele->next = NULL;
if (*head == NULL)
{
*head = nele;
return (nele);
}
h = *head;
while (h->next != NULL)
h = h->next;
h->next = nele;
return (nele);
}
