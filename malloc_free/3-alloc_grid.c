#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - pointer to a pointer
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to the 2 dim array of int
 */
int **alloc_grid(int width, int height)
{
	int **aux;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	aux = malloc(sizeof(int *) * height);

	if (aux == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		aux[a] = malloc(sizeof(int) * width);
		if (aux[a] == NULL)
		{
			for (a = 0; a < height; a++)
				free(aux[a]);
			free(aux);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			aux[a][b] = 0;
	}
	return (aux);
}
