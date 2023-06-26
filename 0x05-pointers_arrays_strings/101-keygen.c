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
	char comb[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char pass[20];
	int i = 0, add = 0, random;
	srand(time(NULL));
	while (add < 2772)
	{
		random = rand() % 62;
		pass[i] = comb[random];
		add += pass[i++];
	}
	random = 2772 - add;
	pass[i++] = random;
	pass[i] = '\0';
	printf("%s", pass);
	return (0);
}
