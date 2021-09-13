#include "main.h"

/**
 * _memset - fills the first nbytes of memory area point to by s const byte b
 * @s: pointer
 * @b: char b
 * @n: unsigned int
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}
