#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change for an amount of
 * money
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int changes[] = {25, 10, 5, 2, 1};
	int coins = 0, i = 0, cents;

	if (argc != 2)
	{
		return (printf("Error\n"), 1);
	}
	else if (atoi(argv[1]) < 0)
	{
		return (printf("0\n"), 0);
	}
	else
	{
		cents = atoi(argv[1]);
		while (cents)
		{
			if (cents >= changes[i])
			{
				cents -= changes[i];
				coins++;
			}
			else
			{
				i++;
			}
		}
	}
	return (printf("%d\n", coins), 0);
}
