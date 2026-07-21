#include <stdlib.h>

/**
* alloc_grid - used to allocated and return a 2D pointer
* @width: the width of the grid
* @height: height of the grid
*
* Return: pointer to the 2d array
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int h;
	int w;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}

	h = 0;
	w = 0;

	while (h < height)
	{
		grid[h] = malloc(sizeof(int) * width);
		if (grid[h] == NULL)
		{
			while (h > 0)
			{
				h--;
				free(grid[h]);
			}
			free(grid);
			return (NULL);
		}

		while (w < width)
		{
			grid[h][w] = 0;
			w++;
		}
		h++;
	}
	return (grid);
}
