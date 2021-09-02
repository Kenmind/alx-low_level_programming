#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n: the number of times the character should be printed
 * Return: 0
 */

void print_line(int n)
{
int len;

if (n > 0)

{
for (len = 0; len < n; len++)

_putchar('_');
}

_putchar('\n');
}
