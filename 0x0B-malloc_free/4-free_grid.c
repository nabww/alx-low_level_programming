#include "main.h"

/**
 * free_grid - check code
 * @grid: width
 * @height: length
 * Return: grid
 **/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
