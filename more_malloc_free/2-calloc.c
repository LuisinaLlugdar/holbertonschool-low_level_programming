#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory using malloc, and sets it to zero
 * @nmemb: number of elements of the array
 * @size: sizeof(elements)
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *aux;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	aux = malloc(nmemb * size);
	if (aux == NULL)
		return (NULL);

	for (a = 0; a < nmemb * size; a++)
		aux[a] = 0;

	return (aux);
}
