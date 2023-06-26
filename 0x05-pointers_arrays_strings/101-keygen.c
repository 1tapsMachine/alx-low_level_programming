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
	int i, n;
	unsigned long int sum;
	char password[100];

	n = i = sum = 0;
	char al[63] = "0123456789ABCDEFGHIJKLNMOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	srand(time(NULL));
	while (sum < (2772 - 122))
	{
		n = rand() % 62;
		password[i] = al[n];
		sum = sum + password[i];
		i++;
	}
	n = 2772 - sum;
	password[i] = n;
	password[++i] = '\0';
	printf("%s\n", password);
	return (0);
}
