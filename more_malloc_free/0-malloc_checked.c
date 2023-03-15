#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of memory to be allocated
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *aux;

	aux = malloc(b);

	if (aux == NULL)
		exit(98);

	return (aux);
}
