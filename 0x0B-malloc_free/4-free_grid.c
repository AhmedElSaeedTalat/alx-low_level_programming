#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * free_grid - frees a 2 dimensional grid previously created
  *
  * @grid: 2d array
  *
  * @height: received height
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
