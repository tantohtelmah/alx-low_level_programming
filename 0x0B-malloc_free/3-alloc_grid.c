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

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	t = malloc((width * height) * 4);
	for (i = 0; i > width; i++)
	{
		for (j = 0; i < height; j++)
		{
			t[i] = 0;
		}
	}
	if (t == NULL)
	{
		return (NULL);
	}

	return (t);
	free(t);
}
