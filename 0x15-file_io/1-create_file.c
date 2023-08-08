#include "main.h"
/**
 * create_file - creates a file
 * @filename: file to create
 * @text_content: string to write to file
 * Return: 1 on success, -1 on failure
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, write_bytes;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	for (len = 0; text_content[len] != '\0'; len++)
		;
	write_bytes = write(fd, text_content, len);
	if (write_bytes < 0 || write_bytes != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
