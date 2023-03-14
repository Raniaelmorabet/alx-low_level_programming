#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - allocate 2d array of integers
  * @width: the width of the 2d array
  * @height: the height of the 2d array
  *
  * Return: pointer to 2d array
  */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = (int **) malloc(height * sizeof(int *));
	if (!array)
		return (NULL);
	while (i < height)
	{
		*(array + i) = (int *) malloc(width * sizeof(int));
		if (*(array + i) == NULL)
		{
			while (j < height)
			{
				free(*(array + j));
				j++;
			}
			free(array);
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		while (j < width)
		{
			*(*(array + i) + j) = 0;
			j++;
		}
		j = 0;
		i++;
	}
	return (array);
}
