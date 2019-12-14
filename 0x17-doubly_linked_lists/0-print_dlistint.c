#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - print all the elements of a dlistint_t
 * @h: pointer
 *
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
int a = 0;
while (h != NULL)
{
printf("%d\n", (*h).n);
h = (*h).next;
a++;
}
return (a);
}
