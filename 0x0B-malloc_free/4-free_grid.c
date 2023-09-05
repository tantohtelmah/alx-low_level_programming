#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - creates a copy of a two dimensional array of characters
 * @grid: int
 * @height: int
 * Return: none
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
