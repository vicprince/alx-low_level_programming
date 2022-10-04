#include "main.h"
/**
 * free_grid - function that frees 2-d array
 * @grid: double pointer to grid
 * @height: integer
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
