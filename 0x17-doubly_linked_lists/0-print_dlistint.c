#include "lists.h"

/**
 * print_dlistint - prints the elements of a doubly linked list
 * @h: pointer to the head of dlistint
 * Return: No. of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *head = h;
	size_t count = 0;

	while (head)
	{
		printf("%i\n", head->n);
		head = head->next;
		count++;
	}
	return (count);
}
