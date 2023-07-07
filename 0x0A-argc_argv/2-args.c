#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc)
		for (; i < argc ; i++)
			printf("%s\n", argv[i]);
	return (0);
}
