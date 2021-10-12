#include "lists.h"

/**
 * sum_listint - sums up all the data of a listint_t list
 * @head: head node
 * Return: the sum of listint_t list
 *		0 when list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *node;

	register int sum = 0;

	if (!head)
		return (0);
	node = head;
	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
