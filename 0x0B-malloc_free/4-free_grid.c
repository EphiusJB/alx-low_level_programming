#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees up a 2d grid
 * @grid: double pointer 2d grid int
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
