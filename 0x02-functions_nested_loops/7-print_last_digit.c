#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: The number to be checked
 *
 * Return: the last digit of n
 *
 */
int print_last_digit(int n)
{
int last_digit;
if (n < 0)
{
last_digit = -1 * (n % 10);
_putchar(last_digit + '0');
}
else
{
last_digit = n % 10;
_putchar(last_digit + '0');
}
return (last_digit);
}
