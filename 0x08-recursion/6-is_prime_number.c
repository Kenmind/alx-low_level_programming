#include "main.h"
/**
* _div - checks if int is divisible by d
* @i: number to check
* @d: the divisor
* Return: 0 if divisible else 1
*/

int _div(int i, int d)
{
if (i % d == 0)
return (0);

if (d == i / 2)
return (1);

return (_div(i, d + 1));
}

/**
* is_prime_number - tests whether n is a prime number or not
* @n: number to be tested
* Return: 1 if n is prime number else 0
*/

int is_prime_number(int n)
{
int d = 2;

if (n <= 1)
return (0);

if (n >= 2 && n <= 3)
return (1);

return (_div(n, d));
}
