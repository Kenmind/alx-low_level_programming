#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end of a dlistint_t list
 * @head: pointer to the first node
 * @n: integer
 * Return: New node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t)), *current = *head;

	if (!newNode)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (!current)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	while (current->next)
		current = current->next;
	current->next = newNode;
	newNode->prev = current;
	return (newNode);
}
