#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: pointer to array
 * @n: number of elements in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
int i;

while (i < n)
{
int temp = a[i];
a[i] = a[n];
a[n] = temp;
i++;
n--;
}

}
