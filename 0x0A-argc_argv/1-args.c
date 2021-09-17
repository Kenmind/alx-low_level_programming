#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print the number of arguments passed into it followed by a new line
 * @argc: count of arguments passed to the program
 * @argv: array of argc
 * Return: 0, Always
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
