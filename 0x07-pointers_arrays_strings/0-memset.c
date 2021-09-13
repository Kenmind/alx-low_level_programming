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
unsigned int index;
unsigned char *ptr = s, value = b;

for (index = 0; index < n; index++)
ptr[index] = value;

return (ptr);

}
