#include "main.h"
/**
* print_number - prints an integer
*
* @n : int
*
* Return: Always 0 (Success)
*/
void print_number(int n)
{
	unsigned int si7ri = n;

	if (n < 0)
	{

		_putchar(45);
		si7ri = -n;
	}
	if (si7ri / 10)
	{
		print_number(si7ri / 10);
	}
	_putchar(si7ri % 10 + '0');
}
