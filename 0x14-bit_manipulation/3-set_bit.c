#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = 0;
	int i;

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if (get_bit(n, i) != get_bit(m, i))
			bits++;
	}
	return (bits);
}
