#include "main.h"
#include <stdlib.h>

/**
 * free_grid - unction that frees a 2 dimensional grid
 * previously created by your alloc_grid function
 *
 * @grid: 1st parameter
 * @height: 2nd parameter
 *
 */


void free_grid(int **grid, int height)
{
	int count;

	for (count = 0 ; count < height ; count++)
	{
		free(grid[count]);
	}
	free(grid);
}
