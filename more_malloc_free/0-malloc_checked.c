#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of memory to be allocated
 */
void *malloc_checked(unsigned int b)
{
	void *aux;

	aux = malloc(sizeof(int) * b);

	if (aux == NULL)
		exit(98);

	return (aux);
}
