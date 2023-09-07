#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of characters
 * @min: int
 * @max: int
 * Return: int
*/

int *array_range(int min, int max)
{
	int *t;
	int i;

	if (min > max)
		t = NULL;
	t = malloc(((max - min) + 1) * sizeof(int) + 1);
	if (t == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
		t[i] = min + i;
	return (t);
}
