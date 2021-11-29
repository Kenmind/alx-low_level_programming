#include <unistd.h>

/**
 * _putchar - writes char to stdout
 * @c: char to write
 * Return: 1 else -1 and errno set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
