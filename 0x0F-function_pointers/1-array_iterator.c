#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter on each
 * element of an array
 * @array: input array
 * @size: number of elements
 * @action: executed on each element of an array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action && array)
		while (size--)
			action(*(array++));
}
