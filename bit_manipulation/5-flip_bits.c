#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: one of the numbers
 * @m: the other number
 * Return: number of bits changed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif;
	unsigned int count = 0;

	dif = n ^ m;

	while (dif)
	{
		count += dif & 1;
		dif >>= 1;
	}
	return (count);
}
