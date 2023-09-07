#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - creates an array of characters
 * @b: unsigned int
 * Return: none
*/

void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);
	if (t == NULL)
		exit(98);
	return (t);
}
