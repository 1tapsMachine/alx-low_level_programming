 #include "main.h"
 /**
 * print_number - prints an integer using _putchar
 *
 * @n: integer to be printed
 * 
 * Return: void
 */
void print_number(int n)
{
	unsigned int Pn;
	
	if (n < 0)
	{
		_putchar('-');
		Pn = -n;
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n / 10)
			print_number(n / 10);
		_putchar(n % 10 + '0');
	}
}
