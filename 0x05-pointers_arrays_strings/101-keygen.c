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
	int random, i = 0;
	char password[100], alNum[] = "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	unsigned int checksum = 0;
	srand(time(NULL));
	while (random < (2772 - 122))
	{
		random = rand() % 62;
		password[i] = alNum[random];
		checksum += password[i];
		i++;
	}
	random = 2772 - checksum;
	password[i] = random;
	password[++i] = '\0';
	printf("%s\n", password);
	return (0);
}
