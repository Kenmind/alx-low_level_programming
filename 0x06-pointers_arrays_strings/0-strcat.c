#include "main.h"

/**
* _strcat - Appends the src string to the dest string
* @dest: destination string
* @src: source string
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
char *cat = dest + _strlen(dest);
int length = _strlen(dest) + _strlen(src);

while (*src)
{
*cat += *src;
src++;
cat++;
}
*cat += '\0';
cat -= (length);
*dest = *cat;

return (cat);

}
