#include "lists.h"

/**
 * listint_len - prints the number of elements in a listint_t list
 * @h: pointer to the first node
 * Return: the number of elements in a linked list listint_t list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int length = 0;

	while (h)
	{
		h = h->next;
		length++;
	}
	return (length);
}
