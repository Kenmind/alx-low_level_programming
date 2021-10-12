#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: head node
 * @index: index of node
 * Return: index else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;

	register uint count = 0;

	node = head;
	while (node)
	{
		if (count == index)
			return (node);
		count++;
		node = node->next;
	}
	return (node);
}
