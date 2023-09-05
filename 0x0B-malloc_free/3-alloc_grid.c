#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - creates a copy of a two dimensional array of characters
 * @width: int
 * @height: int
 * Return: int
*/

int **alloc_grid(int width, int height)
{
	int **t;
	int i;
	int j;

	if (width <= 0 || (height <= 0))
	{
		return (NULL);
	}
	t = malloc(height * sizeof(int *));
	if (t == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		t[i] = malloc(width * sizeof(int));
		if (t[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(t[j]);
			free(t);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			t[i][j] = 0;
	}
	return (t);
}
