#include "search_algos.h"

/**
* exponential_search - searches an array with interpolation search
* @array: interger array to be saerched
* @size: size if the array
* @value: value to be searched
* Return: interger
*/


int exponential_search(int *array, size_t size, int value)
{
	if (!array)
	{
		return (-1);
	}

	if (array[0] == value)
	{
		return (0);
	}

	int bound = 1;

	while (bound < size && array[bound] < value)
	{
		printf("Comparing with array[%d] = %d\n", bound, array[bound]);
		bound *= 2;
	}

	int low = bound / 2;

	int high = (bound < size) ? bound : size - 1;

	return binary_search(array, low, high, value);
}

int binary_search(int *array, int low, int high, int value)
{
	while (low <= high)
	{
		int mid = low + (high - low) / 2;

		printf("Binary search: Comparing with array[%d] = %d\n", mid, array[mid]);

		if (array[mid] == value)
		{
			return (mid);
		} else if (array[mid] < value)
		{
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}
	return (-1);
}
