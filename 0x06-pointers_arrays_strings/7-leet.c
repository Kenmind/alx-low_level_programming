#include "main.h"

/**
* leet - converts a string to 1337
* @c: string
* Return: leet
*/

char *leet(char *c)
{
char *cp = c;
char k[] = {'A', 'E', 'O', 'T', 'L'};
int v[] = {4, 3, 0, 7, 1};
unsigned int i;

while (*c)
{
for (i = 0; i < sizeof(k) / sizeof(char); i++)
{
if (*c == k[i] || *c == k[i] + 32)
{
*c = 48 + v[i];
}
}
c++;
}

return (cp);
}
