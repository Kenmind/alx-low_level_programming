#include "lists.h"

/**
 * free_dlistint - frees dlistint_t list
 * @head: first node pointer
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (!head)
		return;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	head = NULL;
}
