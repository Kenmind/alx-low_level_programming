#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char to fill with
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *str;

	str = malloc(sizeof(char) * size);
	if (!size || !str)
		return (NULL);
	for (k = 0; k < size; k++)
		str[k] = c;
	return (str);
}
