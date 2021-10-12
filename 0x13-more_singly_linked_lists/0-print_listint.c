#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the first node
 * Return: No. of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int j = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		j++;
	}
	return (j);
}
