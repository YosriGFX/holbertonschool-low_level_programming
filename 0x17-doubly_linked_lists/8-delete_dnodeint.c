#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: link to node
 * @index: nth index
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
if ((*head)->next)
{
	unsigned int a = 0, b = 0;
	dlistint_t *delete;
	dlistint_t *counter;
	counter = *head;
	while (counter != NULL)
	{
		counter = counter->next;
		a++;
	}
	delete = *head;
	if (index >= a)
		return (-1);
	else if ((index == 0) && (delete->prev == 0))
	{
		if (delete->next == NULL)
		{
			return (-1);
		}
		else
			delete = delete->next;
		delete->prev = NULL;
		*head = delete;
		return (1);
	}
	else if (index < a)
	{
		for (b = 0; b < index - 1; b++)
			delete = delete->next;
		delete->next = delete->next->next;
		delete->next->prev = delete;
		return (1);
	}
	return (-1);
}
else
{
	head = NULL;
	return (-1);
}
}
