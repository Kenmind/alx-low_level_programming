#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: pointer to node
 * Return: pointer to the head node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head, *next;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (prev);
}
