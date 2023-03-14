#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a grid
 * @grid: grid made with alloc_grid function
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL)
		free(grid);

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
