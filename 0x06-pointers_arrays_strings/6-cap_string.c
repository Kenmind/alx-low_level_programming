#include "main.h"

/**
* cap_string - capitalizes the first letter of each word in a string
* @str: string
* Return: 0
*/

char *cap_string(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (i == 0)
if ((str[i] >= 97 && str[i] <= 122))
str[i] = str[i] - 32;
continue;
}

if (str[i] == ' ')
{
i++;
if (str[i] >= 97 && str[i] <= 122)
{
str[i] = str[i] - 32;
}
}
else
{
if (str[i] >= 65 && str[i] <= 90)
str[i] = str[i] + 32;
}

return (0);
}
