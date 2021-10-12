#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at the given position
 * @head: pointer to head node
 * @idx: index where to insert new node
 * @n: integer
 * Return: Address of new node else NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *now;
	listint_t *node;

	register uint i;

	node = (listint_t *) malloc(sizeof(listint_t));

	if (!head || !node)
		return (NULL);
	node->n = n;
	if (!idx)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	now = *head;
	while (now)
	{
		if (i == idx - 1)
		{
			node->next = now->next;
			now->next = node;
			return (node);
		}
		i++;
		now = now->next;
	}
	free(node);
	return (NULL);
}
