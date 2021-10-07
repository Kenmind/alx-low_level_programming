#include "lists.h"

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: Address of the new node else NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	char *ptr;
	int len;
	list_t *node;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	ptr = strdup(str);
	if (ptr == NULL)
	{
		free(node);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	node->str = ptr;
	node->len = len;
	node->next = *head;

	*head = node;

	return (node);
}
