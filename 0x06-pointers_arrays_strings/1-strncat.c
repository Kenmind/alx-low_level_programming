#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: destination pointer
* @src: pointer string
* @n: n bytes
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
int dest_len = _strlen(dest);
int i;

for (i = 0 ; i < n && src[i] != '\0' ; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';

return (dest);
}
