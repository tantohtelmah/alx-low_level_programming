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

	t = malloc(((max - min) + 1) * sizeof(int));
	for (i = min; i <= max; i++)
		t[i] = i;
	if (min > max || t == NULL)
		t = NULL;
	return (t);
}
