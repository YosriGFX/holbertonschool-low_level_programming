#include "lists.h"
/**
 * dlistint_len - len of element of linked list
 * @h: pointer to linked list
 * Return: n element
 */
size_t dlistint_len(const dlistint_t *h)
{
int a = 0;
while (h != NULL)
{
h = (*h).next;
a++;
}
return (a);
}
