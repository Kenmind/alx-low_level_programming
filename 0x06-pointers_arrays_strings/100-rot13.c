#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @c: string
 * Return: encoded string
 */

char *rot13(char *c)
{
int i;

char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
char *str = c;

while (*c)
{
for (i = 0; i <= 52;  i++)
{
if (*c == rot13[i])
{
*c = ROT13[i];
break;
}
}
c++;
}
return (str);
}
