#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in its binary form
 */
void print_binary(unsigned long int n)
{
	/*cuando n=1, deja de llamar recursivo y empieza a putchar lo que...*/
	/*...fue dejando pendiente en cada llamada*/
	if (n > 1)
		/*se va llamando a si misma con el numero corrido un lugar*/
		/*hasta llegar a valer 1*/
		print_binary(n >> 1);

	/*compara el numero & 1, cuyo resultado sera solo el primer valor*/
	_putchar((n & 1) + '0');
}
