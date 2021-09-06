#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
int kennedy = 0, len = 0, n;

while (str[kennedy++])
len++;

if ((len % 2) == 0)
n = (len + 1) / 2;

else
n = (len + 1) / 2;

for (kennedy = n; kennedy < len; kennedy++)
_putchar(str[kennedy]);
_putchar('\n');
}
