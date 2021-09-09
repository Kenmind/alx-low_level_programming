#include "main.h"

/**
* string_toupper - changes lowercase letters of a string to uppercase
* @str: string
* Return: 0
*/

char *string_toupper(char *str)
{
int i;

while (i >= 97 && i <= 122)
{
str[i] = str[i] - 32;
}
return (0);
}
