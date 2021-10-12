#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to the head node
 * Return: head node's data(n)
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int tmp;

	if (!(*head) || !head)
		return (0);
	node = *head;
	tmp = node->n;
	*head = (*head)->next;
	free(node);
	return (tmp);
}
