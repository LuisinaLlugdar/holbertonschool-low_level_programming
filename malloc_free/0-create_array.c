#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of the char
 * @c: initalizes the array with this char
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *aux;
	unsigned int a;

	if (size <= 0)
	{
		return (NULL);
	}
	aux = malloc(sizeof(char) * size);
	if (aux == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		aux[a] = c;
	}
	return (aux);
	free(aux);
}
