#include "function_pointers.h"


/**
 * int_index - prints name
 * @array: int
 * @size: int
 * @cmp:int
 * Return: None
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; ++i)
	{
		if (cmp(array[i]) != 0)
			break;
			return (i);
	}
	return (-1);
}
