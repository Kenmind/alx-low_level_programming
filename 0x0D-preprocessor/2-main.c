#include <stdio.h>

/**
 * main - prints name of the file it was compiled from followed by a newline
 * Return: void
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
