#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * _putchar: prints to standard output
 * Return: void
 */

void print_numbers(void)
{
int c = 0;

while (c <= 9)
{
c++;
_putchar(c);
_putchar('\n');
}
}
