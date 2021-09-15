#include "main.h"

/**
* _sqrt - finds the square root of a number
* @m: the number to find the root of
* @r: the root to be tested
* Return: square root
*/

int _sqrt(int m, int r)
{
if ((r * r) == m)
return (r);

if (r == m / 2)
return (-1);

return (_sqrt(m, r + 1));
}

/**
* _sqrt_recursion - prints the natural square root of a number
* @n: number
* Return: -1 if n does not have a natural square root
*/

int _sqrt_recursion(int n)
{
int r = 0;

if (n < 0)
return (-1);

if (n == 1)
return (1);

return (_sqrt(n, r));
}
