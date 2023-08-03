#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass;

	srand(time(0));
	pass = rand();
	printf("%i\n", pass);

	return (0);
}
