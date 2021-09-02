#include "main.h"

/**
* print_most_numbers - prints numbers from 0 to 9 excluding 2 and 4
* int i: variable used
* Return: void
*/

void print_most_numbers(void)
{
int i;
for (i = 0 && i < 10; i != 2 && i != 4; i++)
_putchar(i);
_putchar('\n');
}
