#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the result of two multiplied numbers
 * @argc: argument count
 * @argv: argugument vector
 * Return: 0 on success else 1
 */

int main(int argc, char *argv[])
{
int i, z, prod;

if (argc != 3)
{
printf("Error\n");
return (1);
}

i = atoi(argv[1]);
z = atoi(argv[2]);
prod = i *z;

printf("%d\n", prod);

return (0);
}
