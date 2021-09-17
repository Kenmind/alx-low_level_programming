#include <stdlib.h>
#include <stdio.h>

/**
* main - prints the sum of two postive numbers followed by a new line
* @argv: argument vector
* @argc: argument count
* Return: 0 on success else 1
*/

int main(int argc, char **argv)
{
int i, z, sum = 0;

for (i = 1; i < argc; i++)
{
for (z = 0; argv[i][z]; z++)
{
if (argv[i][z] < '0' || argv[i][z] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);

return (0);
}
