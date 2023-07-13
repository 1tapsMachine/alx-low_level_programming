#include <stdio.h>
#include <stdlib.h>


/**
 * isDgt - a function that checks if a buffer has only digits.
 * @buffer: buffer that will be tested.
 * Return: 0 if a non-digit was found, 1 otherwise
 */
int isDgt(char *buffer)
{
	int add = 0;

	while (buffer[add] != '\0')
	{
		if (!(buffer[add] >= '0' && buffer[add] <= '9'))
			return (0);

		add++;
	}

	return (add);
}

/**
 * main - a program that multiplies two numbers.
 * @argc: count of arguments given to the programs
 * @argv: arguments given to the program.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{

	char *strBuf;
	char *strBuf2;
	int nbr1, nbr2;

	if (argc < 3)
	{
		printf("Error\n");
		return (98);
	}

	strBuf = argv[1];
	strBuf2 = argv[2];
	nbr1 = isDgt(strBuf);
	nbr2 = isDgt(strBuf2);

	if ((nbr1 == 0) || (nbr2 == 0))
	{
		printf("Error\n");
		return (98);
	}

	printf("%i\n", atoi(strBuf) * atoi(strBuf2));
	return (0);
}
