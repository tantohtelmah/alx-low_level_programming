#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - creates an array of characters
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: none
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *t;

	t = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
	{
		t = NULL;
		return (NULL);
	}
	if (t == NULL)
		return (NULL);
	memset(t, 0, nmemb * size);
	return (t);
}
