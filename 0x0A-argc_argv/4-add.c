#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints the sum of all the arguments it receives
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum = 0, i = 1, j;

	if (argc)
	{
		if (argc == 1)
			return (printf("0\n"), 0);
		for (; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					return (printf("Error\n"), 1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	return (printf("%d\n", sum), 0);
}
