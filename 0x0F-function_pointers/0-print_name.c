#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: callback of print_name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;
	(*f)(name);
}
