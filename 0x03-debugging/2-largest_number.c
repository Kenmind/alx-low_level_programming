#include "main.h"

/**
 * largest_number - prinst the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third interger
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;

a = 972;
b = -98;
c = 0;

largest = largest_number(a, b, c);

if (a > b && b > c)
{
largest = a;
}
else if (b > a && a > c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
}
