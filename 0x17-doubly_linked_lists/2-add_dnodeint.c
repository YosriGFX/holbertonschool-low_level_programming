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
dlistint_t *begin = malloc(sizeof(dlistint_t));
dlistint_t *temp = malloc(sizeof(dlistint_t));
if (begin == NULL)
return (NULL);
begin->n = n;
begin->prev = NULL;
begin->next = NULL;
if (*head == NULL)
{
begin->next = NULL;
*head = begin;
return (*head);
}
temp = *head;
begin->next = temp;
temp->prev = begin;
*head = begin;
return (begin);
}
