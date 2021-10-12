#include "lists.h"

/**
 * find_listint_loop - finds a loop in a listint_t list
 * @head: head node
 * Return: the address where the loop starts else NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *lag;
	listint_t *fast;

	if (!head)
		return (NULL);
	lag = fast = head;
	while (fast->next && (fast->next)->next)
	{
		lag = lag->next;
		fast = (fast->next)->next;
		if (lag == fast)
		{
			lag = head;
			while (lag != fast)
			{
				lag = lag->next;
				fast = fast->next;
			}
			return (fast);
		}
	}
	return (NULL);
}
