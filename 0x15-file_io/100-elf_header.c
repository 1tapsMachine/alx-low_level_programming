#include "main.h"
/**
 * main - program that displays the information contained in the ELF header
 * at the start of an ELF file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on failure
 *
 */
int main(int argc, char *argv[])
{
	int fd, read_bytes, close_value;
	char buf[5];
	char *error_msg = "Error: It is not an ELF file\n";

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]), exit(98);
	read_bytes = read(fd, buf, 5);
	if (read_bytes < 0)
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]), exit(98);
	if (read_bytes == 0)
		dprintf(STDERR_FILENO, "%s", error_msg), exit(98);
	if (buf[0] != 0x7f || buf[1] != 'E' || buf[2] != 'L' || buf[3] != 'F')
		dprintf(STDERR_FILENO, "%s", error_msg), exit(98);
	printf("ELF Header:\n");
	printf("  Magic:  ");
	for (read_bytes = 0; read_bytes < 5; read_bytes++)
		printf("%02x ", buf[read_bytes]);
	printf("\n");
	close_value = close(fd);
	if (close_value < 0)
		dprintf(STDERR_FILENO, "Error: Cannot close fd %d\n", fd), exit(98);
	return (0);
}
