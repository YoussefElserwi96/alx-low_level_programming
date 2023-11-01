#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns
 * a pointer to a 2 dimensional array of integers.
 * @width: width.
 * @height: height.
 * Return: pointer of an array of integers
 */

int **alloc_grid(int width, int height)
{
	int **i_out;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	i_out = malloc(height * sizeof(int *));
	if (i_out == NULL)
	{
		free(i_out);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		i_out[i] = malloc(width * sizeof(int));
		if (i_out[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(i_out[i]);
			free(i_out);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			i_out[i][j] = 0;

	return (i_out);
}
