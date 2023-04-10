#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number
 * @index: index to find the bit
 * Return: 1 if worked or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int comp = 1;
	unsigned int range;

	/* valor maximo que puede tener un unsigned long int */
	/* multiplicado por 8 para que sea en bits */
	range = (sizeof(unsigned long int) * 8);
	if (index > range)
		return (-1);

	/*muevo el 0b1 "index" lugares para enfrentarlo al index que quiero..*/
	/*...cambiarle el valor a 0*/
	comp <<= index;
	/*aplico el ~ para que todas las entradas sean 1 menos la del index*/
	comp = ~comp;
	/*al hacer &, el valor 0 en el index va a anular ya sea 0 o 1 en n*/
	*n = (*n & comp);
	return (1);
}
