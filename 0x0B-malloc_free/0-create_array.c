#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: unsigned int
 * @c: charcter
 * Return: character
*/

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	t = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		t[i] = c;
	}
	if (size == 0)
	{
		return (NULL);
	}
	return (t);
}
