#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - creates an array of characters
 * @nmemb: unsigned int
 * @nsize: unsigned int
 * Return: none
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *t;

	t = calloc(nmemb, size);
	if (nmemb == 0 || size == 0)
	{
		t = NULL;
	}
	if (t == NULL)
		return (NULL);
	return (t);
}
