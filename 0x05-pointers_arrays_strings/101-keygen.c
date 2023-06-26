#include "main.h"
#include <stdlib.h>
#include <time.h>
/**
* main - generates random valid passwords
*
* Return: Always 0. (Success)
*/
int main(void)
{
	int random, checksum;
	srand(time(NULL));
	while (random <= 2772)
	{
		random = rand() % 100;
		printf("%d\n", random);
	}
	checksum = 2772 - random;
	printf("%d", checksum);
	return (0);
}
