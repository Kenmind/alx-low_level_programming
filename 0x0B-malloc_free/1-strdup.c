#include <stdlib.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		s++;
		len++;
	}
	return (len);
	return (0);
}

/**
 * _strdup - returns a pointer to duplicate of str
 * @str: string to be duplicated
 * Return: pointer to str duplicate
 */

char *_strdup(char *str)
{
	char *ptr, *_ptr;

	if (!str)
		return (NULL);

	ptr = malloc((_strlen(str) + 1) * sizeof(char *));
	/* provided there's low memory */

	if (!ptr)
		return (NULL);
	_ptr = ptr;

	while (*str)
	{
		*_ptr = *str;
		str++;
		_ptr++;
	}
	_ptr = '\0';
}
