#include "lists.h"

/**
 * free_listint - frees a linked listint_t list
 * @head: head node
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	if (!head)
		return;
	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
	head = NULL;
}
