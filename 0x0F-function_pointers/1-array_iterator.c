#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - prints name
 * @array: int
 * @size: size_t
 * @action:void
 * Return: None
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; ++i)
		action(array[i]);
}
