#include "lists.h"

/**
 * sum_dlistint - prints the sum of elements of dlistint_t list
 * @head: pointer to first node
 * Return: sum of int elements in list else 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
