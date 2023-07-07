#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int sum = 0, i = 1;

	if (argc)
	{
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
