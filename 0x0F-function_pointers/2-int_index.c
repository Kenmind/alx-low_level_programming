#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input array
 * @size: size of array
 * @cmp: comparison
 * Return: integer found in cmp
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size > 0 && cmp && size && array)
		for (j = 0; j <= size; j++)
			if (cmp(array[j]))
				return (j);
	return (-1);
}
