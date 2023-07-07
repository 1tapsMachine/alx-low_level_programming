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
	int i = 1;
	if (argc)
		for (; i < argc ; i++)
			printf("%s\n", argv[i]);
	return (0);
}
