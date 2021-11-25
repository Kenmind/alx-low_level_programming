#include "lists.h"

/**
 * insert_dnodeint_at_index - adds node at index
 * @h: pointer to first node
 * @idx: index
 * @n: integer
 * Return: New node else NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *newNode;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));
	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = temp;
	newNode->next = temp->next;
	temp->next->prev = newNode;
	temp->next = newNode;

	return (newNode);
}
