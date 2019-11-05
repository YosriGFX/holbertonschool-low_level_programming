#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node
 * @head: double pointer
 * Return: int
 */
int pop_listint(listint_t **head)
{
listint_t *h;
int n;
if (head == NULL || *head == NULL)
return (0);
h = *head;
n = (*head)->n;
*head = (*head)->nn;
free(h);
return (n);
}

