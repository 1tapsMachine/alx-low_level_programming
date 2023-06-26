#include "main.h"
/**
* puts_half - prints half of a string, followed by a new line
*
* @str: string to be printed
*
* Return: void
*/
void puts_half(char *str)
{
	int len = 0, half = 0;

	while (*str)
	{
		len++;
		str++;
	}
	half = len / 2;
	str -= len;
	while (*str && len < half)
	{
		_putchar(*str);
		str++;
		len--;
	}
	_putchar('\n');
}
