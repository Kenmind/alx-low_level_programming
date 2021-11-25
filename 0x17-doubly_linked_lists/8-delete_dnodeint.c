#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: pointer to first node
 * @index: index where to delete node from
 * Return: 1 else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t num = 0;
	dlistint_t *cur = *head;

	if (!*head)
		return (-1);
	while (cur)
	{
		num++;
		cur = cur->next;
	}
	if (num < index + 1)
		return (-1);
	cur = *head;
	if (!index)
	{
		*head = cur->next;
		if (cur->next)
			cur->next->prev = NULL;
		cur->next = NULL;
		free(cur);
		return (1);
	}
	while (index--)
		cur = cur->next;
	cur->prev->next = cur->next;
	if (cur->next)
		cur->next->prev = cur->prev;
	free(cur);
	return (1);
}
