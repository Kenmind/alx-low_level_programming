#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: array of integers
 * @n: number of items to print
 * Return: void
 */

void print_array(int *a, int n)
{
int kennedy;

for (kennedy = 0; kennedy < n; kennedy++)
{
printf("%d", a[kennedy]);

if (kennedy == n - 1)
continue;

printf(", ");
}

printf("\n");
}
