#include "main.h"
/**
* rev_string - reverses a string
*
* @s: string to be reversed
*
* Return: void
*/
void rev_string(char *s)
{
	int i, j;
	char temp;
	
	while (*(s+i))
	{
		i++;
	}
	i--;
	while (i>j)
	{
		temp = *(s+i);
		*(s+i) = *(s+j);
		*(s+j) = temp;
		i--;
		j++;
	}
}
