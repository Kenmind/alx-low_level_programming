#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 *	of listint_t list
 * @head: pointer to the node
 * @index: index where to delete node from
 * Return: 1 else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *now;
	listint_t *next;

	register uint i;

	if (!head || !(*head))
		return (-1);
	now = *head;
	if (!index)
	{
		*head = now->next;
		free(now);
		return (1);
	}
	for (i = 0; now && i < index - 1; i++)
		now = now->next;
	next = now->next->next;
	free(now->next);
	now->next = next;
	return (1);
}
