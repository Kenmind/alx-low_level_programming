#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file
 * @letters: letters to be read and printed
 * Return: the number of letters it could read and print, else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	register int fd, i, j;
	char *buff = NULL;

	if (!filename)
		return (0);
	buff = malloc(letters + 1);
	if (!buff)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	i = read(fd, buff, letters);
	if (i == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	buff[letters] = '\0';
	j = write(STDOUT_FILENO, buff, i);
	if (j == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	free(buff);
	close(fd);
	return (j);
}
