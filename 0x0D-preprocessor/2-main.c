#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints name of the file it was compiled from followed by a newline
 * Return: void
 */

void main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
