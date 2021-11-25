#include "lists.h"

/**
 * dlistint_len - returns the number of elements in dlistint list
 * @h: pointer to head node
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t size = 0;
	
	while (current != NULL)
	{
		current = current->next;
		size++;
	}
	return (size);
}
