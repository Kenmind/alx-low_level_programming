#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the head node
 */

void free_listint2(listint_t **head)
{
	listint_t *node;
	listint_t *tmp;

	if (!head)
		return;
	node = *head;
	while (node)
	{
		tmp = node;
		node = tmp->next;
		free(tmp);
	}
	*head = NULL;
	head = NULL;
}
