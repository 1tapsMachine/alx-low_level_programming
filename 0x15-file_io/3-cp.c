#include "main.h"
/**
 * main - program that copies the content of a file to another file
 * @argc: number of arguments passed to program
 * @argv: array of pointers to string arguments passed to program
 * Return: 0 on success, 97-100 on failure
 *
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_bytes, write_bytes, close_status;
	char *buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((read_bytes = read(fd_from, buf, 1024)) > 0)
	{
		write_bytes = write(fd_to, buf, read_bytes);
		if (write_bytes < 0)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (read_bytes < 0)
		dprintf(STDERR_FILENO,
		"Error: Can't read from file %s\n", argv[1]), exit(98);
	close_status = close(fd_from);
	if (close_status < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	close_status = close(fd_to);
	if (close_status < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
