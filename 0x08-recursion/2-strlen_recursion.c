#include "main.h"

/**
* _strlen_recursion - prints the length of a string
* @s: string
* Return: string length
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (*s);
else
s++;

_strlen_recursion(s + 1);

return (0);
}
