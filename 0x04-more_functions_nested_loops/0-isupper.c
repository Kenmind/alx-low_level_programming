#include "main.h"

/**
* _isupper - checks if the input is an uppercase letter in ASCII
* @c: integer to check
* Return: 1 if true, 0 if false
*/

int _isupper(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
else
{
return (0);
}
}
