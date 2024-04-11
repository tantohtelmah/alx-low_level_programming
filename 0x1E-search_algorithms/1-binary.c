#include "search_algos.h"

/**
* binary_search - searches an array with the binary search
* @array: interger array to be saerched
* @size: size if the array
* @value: value to be searched
* Return: interger
*/

int binary_search(int *array, size_t size, int value)
{
	int left = 0;

	int right = size - 1;

	int i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		int mid_value = array[mid];

		printf("Searching in array : ");
		for (i = left; i <= right; ++i)
		{
			if (i == right)
			{
				printf("%d ", array[i]);
				break;
			}
			printf("%d, ", array[i]);
		}
		printf("\n");

		if (mid_value == value)
			return (mid);
		else if (mid_value < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
