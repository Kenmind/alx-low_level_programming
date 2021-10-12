#include "lists.h"

/**
 * add_nodeint - adds node at the beginning of a listint_t list
 * @head: the head node
 * @n: integer
 * Return: the address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = (listint_t *) malloc(sizeof(listint_t));

	if (!head || !node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head)
		node->next = *head;
	*head = node;
	return (node);

}

