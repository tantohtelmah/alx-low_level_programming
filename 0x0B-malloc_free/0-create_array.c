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
	if (t != NULL && size != 0)
		for (i = 0; i < size; i++)
			t[i] = c;
	return (t);
}
