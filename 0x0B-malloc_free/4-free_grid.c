#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid previously created by your
 * alloc_grid function
 *
 * @grid: The grid too be freed
 * @height: The number of rows in the grid
 *
 * Return: Nothing will be returned
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
