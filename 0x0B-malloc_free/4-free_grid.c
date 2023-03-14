#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees a 2d grid
  * @grid: the 2d grid
  * @height: the height of the grid
  *
  * Return: void
  */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(*(grid + i));
		i++;
	}
	free(grid);
}
