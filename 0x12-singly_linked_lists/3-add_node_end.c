#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{
	char *p = s;

	while (*s)
		s++;
	return (s - p);
}

/**
 * add_node_end - adds a node at the end of the linked list
 * @head: first node
 * @str: string to be added to the linked list
 *  Return: Address of new node else NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *last = *head;
	char *newStr;

	if (!str)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newStr = strdup(str);
	if (!newStr)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = _strlen(newStr);
	newNode->str = newStr;
	newNode->next = NULL;
	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}
	while (last->next)
		last = last->next;
	last->next = newNode;
	return (last);
}
