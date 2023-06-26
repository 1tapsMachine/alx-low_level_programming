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
	while (random < 2772 && random >= 0)
	{
		random = rand() % 10;
		checksum = 2772 - random;
	}
	return (checksum);
}
