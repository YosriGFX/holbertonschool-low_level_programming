#include "lists.h"
/**
 * free_dlistint - Write a function that
 * free a list
 * @head: double pointer
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *cleaner;
while (head)
{
cleaner = head->next;
free(head);
head = cleaner;
}
}
