#include "lists.h"

/**
 * free_list - frees the linked list
 * @head: the head node
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
	head = NULL;
}
