#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of ints
 * @min: min value (included) of the array
 * @max: max value (included) of the array
 * Return: pointer to the created array
 */
int *array_range(int min, int max)
{
	int size, a;
	int *aux;

	size = max - min + 1;

	if (min > max)
		return (NULL);

	aux = malloc(sizeof(int) * size);
	if (aux == NULL)
		return (NULL);

	a = 0;

	while (min <= max)
	{
		aux[a] = min;
		a++;
		min++;
	}
	return (aux);
}
