#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a listint_t list
 * @head: pointer
 * @n: integer
 * Return: address of new node else NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = (listint_t *) malloc(sizeof(listint_t));
	listint_t *now;

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	now = *head;
	while (now->next != NULL)
	{
		now = now->next;
	}
	now->next = node;
	return (node);
}
