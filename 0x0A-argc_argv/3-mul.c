#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the result of two multiplied numbers
 * @argc: argument count
 * @argv: argugument vector
 * return: 1 on fail else 0
 */

int main(int argc, char *argv[])
{
int i, prod = 1;

if (argc > 1 && argc <= 3)
{
for (i = 1; i < argc; i++)
{
prod *= atoi(argv[i]);
}
printf("%d\n", prod);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
