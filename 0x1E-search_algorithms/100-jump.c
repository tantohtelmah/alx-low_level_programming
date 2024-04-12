#include "search_algos.h"

/**
* jump_search - searches an array with the jump search
* @array: interger array to be saerched
* @size: size if the array
* @value: value to be searched
* Return: interger
*/

int jump_search(int *array, size_t size, int value)
{
	size_t jump = (size_t)sqrt(size);

	size_t prev = 0;

	if (!array)
	{
		return (-1);
	}

	while (array[jump - 1] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev = jump;
		jump += sqrt(size);

		if (prev >= size)
		{
			return (-1);
		}
	}

	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev++;

		if (prev == jump || prev >= size)
		{
			return (-1);
		}
	}

	if (array[prev] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		return ((int)prev);
	}

	return (-1);
}
