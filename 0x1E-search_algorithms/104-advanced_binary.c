#include "search_algos.h"

/**
* exponential_search - searches an array with interpolation search
* @array: interger array to be saerched
* @size: size if the array
* @value: value to be searched
* Return: interger
*/

int advanced_binary_recursive(int *array, int low, int high, int value);

int advanced_binary(int *array, size_t size, int value)
{

	if (!array)
	{
		return (-1);
	}

	return advanced_binary_recursive(array, 0, size - 1, value);
}

/**
* advanced_binary_recursive - searches an array with interpolation search
* @array: interger array to be saerched
* @low: interger
* @high: value to be searched
* @value: value to be searched
* Return: interger
*/

int advanced_binary_recursive(int *array, int low, int high, int value) {

	if (low > high) {
		return (-1);
	}

	int mid = low + (high - low) / 2;

	printf("Searching in array[%d:%d] = {", low, high);
	for (int i = low; i <= high; ++i)
	{

		printf("%d", array[i]);
		if (i < high) {
			printf(", ");
		}
	}
	printf("}\n");

	if (array[mid] == value)
	{
		if (mid == low || array[mid - 1] != value)
		{
			return (mid);
		}
		else
		{
			return advanced_binary_recursive(array, low, mid - 1, value);
		}
	} else if (array[mid] < value)
	{
		return advanced_binary_recursive(array, mid + 1, high, value);
	}
	else
	{
		return advanced_binary_recursive(array, low, mid - 1, value);
	}
}
