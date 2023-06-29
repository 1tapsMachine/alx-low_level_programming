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
	unsigned int pN;

	if (n < 0)
	{
		_putchar('-');
		pN = -n;
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		pN = n;
		if (pN / 10)
			print_number(pN / 10);
		_putchar(pN % 10 + '0');
	}
}
