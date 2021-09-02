#include "main.h"

/**
* _isupper - checks if the input is an uppercase letter in ASCII
* @c: integer to check
* Return: 0
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
return (0);
}
