#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free up allocated memory
 * @grid: passed array
 * @height: number of rowa
 * Return: returns nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
