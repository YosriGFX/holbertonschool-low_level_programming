#include "lists.h"
/**
 * find_listint_loop - finds the loop
 * @head: pointer
 * Return: address
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *old, *begin;
old = head;
begin = head;
while (old && begin && begin->next)
{
old = old->next;
begin = begin->next->next;
if (old == begin)
{
old = head;
break;
}
}
if (!old || !begin || !begin->next)
return (NULL);
while (old != begin)
{
old = old->next;
begin = begin->next;
}
return (begin);
}
