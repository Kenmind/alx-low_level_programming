#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of dlistint_t
 * @head: pointer to first node
 * @n: integer
 * Return: Address of new element else NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head)
		(*head)->prev = newNode;
	*head = newNode;

	return (newNode);
}
