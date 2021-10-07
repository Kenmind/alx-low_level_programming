#include "lists.h"

/**
 * add_node_end - adds a node at the end of the linked list
 * @head: first node
 * @str: string to be added to the linked list
 *  Return: Address of new node else NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char __attribute__((unused))*ptr;
	int len;
	list_t *node, *end;

	node = malloc(sizeof(list_t));
	ptr = strdup(str);

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	ptr = node->str;
	node->len = len;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = node;
	}
	return (*head);
}
