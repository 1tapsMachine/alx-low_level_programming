#include <stdio.h>
#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: name of file
 * @letters: the number of letters to be printed
 *
 * Return: 1 for success 0 for failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t r, w;

	if (!filename)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	r = read(fd, buf, letters);
	if (r == -1)
	{
		free(buf);
		return (0);
	}
	w = write(STDOUT_FILENO, buf, r);
	if (w == -1 || w != r)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (w);
}