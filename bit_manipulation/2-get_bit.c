#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index to find the bit
 * Return: the value of the bit, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;
	unsigned int range;

	/* valor maximo que puede tener un unsigned long int */
	/* multiplicado por 8 para que sea en bits */
	range = (sizeof(unsigned long int) * 8);
	if (index > range)
		return (-1);

	/*desplaza n index lugares y lo compara con & 1*/
	value = ((n >> index) & 1);
	return (value);
}
