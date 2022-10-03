#include "main.h"
#include <stdlib.h>

/**
 * free_grid - fres up a 2d grid
 * @grid: a pointer to a pointer
 * @height: the height
 * Return: 0 (success)
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height <= 0)
		return;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
