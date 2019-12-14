#include "lists.h"
/**
 * add_dnodeint - Write a function that
 * adds a new node at the beginning
 * @head: double pointer
 * @n: const int
 * Return: address or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *begin;
begin = malloc(sizeof(dlistint_t));
if (begin == NULL)
return (NULL);
begin->n = n;
begin->next = *head;
begin->prev = NULL;
*head = begin;
return (begin);
}
