#include "lists.h"

/**
 * free_list - frees the linked list
 * @head: the head node
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
	free(temp);
}
