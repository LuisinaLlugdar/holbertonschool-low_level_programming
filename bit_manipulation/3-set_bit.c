#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index to find the bit
 * Return: 1 if worked or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int comp = 1;
	unsigned int range;

	/* valor maximo que puede tener un unsigned long int */
	/* multiplicado por 8 para que sea en bits */
	range = (sizeof(unsigned long int) * 8);
	if (index > range)
		return (-1);

	/*muevo el 0b1 "index" lugares para enfrentarlo al index que quiero..*/
	/*...cambiarle el valor a 1*/
	comp <<= index;
	*n = (*n | comp);
	return (1);
}
