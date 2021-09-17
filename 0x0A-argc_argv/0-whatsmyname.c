#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints the name of the program followed by a new line
* @argc: count of the arguments of the program
* @argv: array of argc
* Return: Always 0
*/

int main(int argc, char **argv)
{
if (argc >= 1)
printf("%s\n", argv[0]);

return (0);
}
