#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the sum of all the arguments it receives
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum = 0, i = 1;

	if (argc)
	{
		if (argc == 1)
			return (printf("0\n"), 0);
		for (; i < argc; i++)
		{
			if (atoi(argv[i]) == 0 && *argv[i] != '0')
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
	}
	return (printf("%d\n", sum), 0);
}
