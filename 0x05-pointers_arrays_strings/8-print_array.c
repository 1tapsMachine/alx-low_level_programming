#include "main.h"
/**
* print_array - prints n elements of an array of integers
*
* Return: void
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != n )
		{
			printf("%d, ", *(a + i));
		}
		else
		{
			printf("%d", *(a + i));
		}
		i++;
	}
}
