#include "search_algos.h"

/**
* interpolation_search - searches an array with interpolation search
* @array: interger array to be saerched
* @size: size if the array
* @value: value to be searched
* Return: interger
*/

int interpolation_search(int *array, size_t size, int value)
{
	if (!array)
	{
		return (-1);
	}

	int low = 0;

	int high = size - 1;

	while (low <= high && array[low] <= value && value <= array[high])
	{
		size_t pos = low + (((double)(high - low) / (array[high] - array[low]))
		* (value - array[low]));
		printf("Comparing with array[%zu] = %d\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
