#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: 1st parameter
 * @height: 2nd parameter
 * Return: if malloc fails return null
 * else return  a pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int w_count, h_count;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (h_count = 0 ; h_count < height ; h_count++)
	{
		grid[h_count] = malloc(sizeof(int) * width);
		if (grid[h_count] == NULL)
		{
			for (; h_count >= 0; h_count--)
				free(grid[h_count]);

			free(grid);
			return (NULL);
		}
	}
	for (h_count = 0 ; h_count < height ; h_count++)
	{
		for (w_count = 0 ; w_count < width ; w_count++)
			grid[h_count][w_count] = 0;
	}

	return (grid);
}
