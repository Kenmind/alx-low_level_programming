#include "lists.h"

/**
 * print_list - prints all the elements of list_t to stdout
 * @h: head node of the linked list
 * Return: length of the string
 */

size_t print_list(const list_t *h)
{
	unsigned int length = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		length++;
	}
	return (length);
}
