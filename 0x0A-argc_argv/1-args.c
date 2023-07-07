#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc)
		printf("%d\n", argc - 1);
	return (0);
}
