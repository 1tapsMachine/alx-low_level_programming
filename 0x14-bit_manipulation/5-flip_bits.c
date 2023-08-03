#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit = 1;
	unsigned int count;

	for (count = 0; count < sizeof(unsigned long int) * 8; count++)
	{
		if ((n & bit) != (m & bit))
			count++;
		bit <<= 1;
	}
	return (count);
}
