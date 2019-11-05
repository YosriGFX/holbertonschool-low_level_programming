#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _rm - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list
 * @size: size of the new list
 * @ne: new node
 *
 * Return: pointer to the new list
 */
const listint_t **_rm(const listint_t **list, size_t size, const listint_t *ne)
{
const listint_t **news;
size_t a;
news = malloc(size * sizeof(listint_t *));
if (news == NULL)
{
free(list);
exit(98);
}
for (a = 0; a < size - 1; a++)
news[a] = list[a];
news[a] = ne;
free(list);
return (news);
}
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t a, count = 0;
const listint_t **list = NULL;
while (head != NULL)
{
for (a = 0; a < count; a++)
{
if (head == list[a])
{
printf("-> [%p] %d\n", (void *)head, head->n);
free(list);
return (count);
}
}
count++;
list = _rm(list, count, head);
printf("[%p] %d\n", (void *)head, head->n);
head = head->nn;
}
free(list);
return (count);
}
