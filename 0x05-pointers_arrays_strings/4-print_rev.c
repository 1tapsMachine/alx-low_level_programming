#include "main.h"
/**
* print_rev - prints a string, in reverse, followed by a new line
*
* @s: string to be printed
*
* Return: void
*/
void print_rev(char *s)
{
	int strLen=0;

	while (*s)
	{
		s++;
		strLen++;
	}
	while (strLen >= 0)
	{
		_putchar(*s--);
		strLen--;
	}
}
