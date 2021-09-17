#include <stdlib.h>
#include <stdio.h>

/**
* main - Prints all arguments it receives including the first one
* @argc: count of arguments passed into the program
* @argv: array of arg c
* Return: 0, always
*/

int main(int argc, char *argv[])
{
int i;

if (argc > 0)
{
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
}
return (0);
}
