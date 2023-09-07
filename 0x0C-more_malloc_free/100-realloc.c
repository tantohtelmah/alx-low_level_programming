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
	void *t;

	t = malloc(old_size);
	if (new_size != old_size)
	{
		if (new_size == old_size)
			return (ptr);
		if (new_size == 0 && ptr != NULL)
		{
			free(ptr);
			return (NULL);
		}
		if (ptr == NULL)
			return (t);
		ptr = t;
		if (ptr == NULL)
			return (NULL);
		memcpy(ptr, t, new_size);
		free(ptr);
	}
	return (ptr);
}
