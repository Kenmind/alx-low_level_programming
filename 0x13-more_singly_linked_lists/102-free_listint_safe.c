#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to int
 * Return: the size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *now;
	listint_t *next;
	int j;

	register short c = 0;

	if (!h || !(*h))
		return (c);
	now = *h;
	while (now)
	{
		j = now - now->next;
		if (j > 0)
		{
			next = now->next;
			free(now);
			now = next;
			c++;
		}
		else
		{
			free(now);
			*h = NULL;
			c++;
			break;
		}
	}
	*h = NULL;
	return (c);
}
