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

	if (size == 0)
		return (NULL);
	t = malloc(size * sizeof(char));
	if (t != NULL)
		for (i = 0; i < size; i++)
			t[i] = c;
	return (t);
}
