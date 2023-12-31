#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - creates an array of characters
 * @ptr: void
 * @new_size: unsigned int
 * @old_size: unsigned int
 * Return: int
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (old_size > new_size)
		old_size = new_size;
	for (i = 0; i < old_size; i++)
		new_ptr[i] = ((char *)ptr)[i];
	free(ptr);
	return (new_ptr);
}
