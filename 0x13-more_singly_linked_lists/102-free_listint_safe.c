#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc_mem - reallocates memory
 * @list: list
 * @size: size
 * @new_elm: new node
 * Return: pointer
 */
listint_t **_realloc_mem(listint_t **list, size_t size, listint_t *new_elm)
{
listint_t **news;
size_t a;
news = malloc(size * sizeof(listint_t *));
if (news == NULL)
{
free(list);
exit(98);
}
for (a = 0; a < size - 1; a++)
news[a] = list[a];
news[a] = new_elm;
free(list);
return (news);
}
/**
 * free_listint_safe - free a listint_t
 * @head: double pointer
 * Return: node
 */
size_t free_listint_safe(listint_t **head)
{
size_t a, count = 0;
listint_t **list = NULL;
listint_t *nn;
if (head == NULL || *head == NULL)
return (count);
while (*head != NULL)
{
for (a = 0; a < count; a++)
if (*head == list[a])
{
*head = NULL;
free(list);
return (count);
}
count++;
list = _realloc_mem(list, count, *head);
nn = (*head)->nn;
free(*head);
*head = nn;
}
free(list);
return (count);
}
