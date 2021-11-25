#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of dlistint_t list
 * @head: pointer to first node
 * @index: index at which node to return
 * Return: nth node else NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head && index)
	{
		index--;
		head = head->next;
	}
	return (head);
}
