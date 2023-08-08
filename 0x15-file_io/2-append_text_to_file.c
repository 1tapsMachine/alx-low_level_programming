#include "main.h"
/**
 * append_text_to_file - appends text to a file
 * @filename: file to append to
 * @text_content: string to append to file
 * Return: 1 on success, -1 on failure
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, write_bytes;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
