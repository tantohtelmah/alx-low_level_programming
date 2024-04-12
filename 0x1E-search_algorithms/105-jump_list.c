#include "search_algos.h"

/**
* jump_list - searches an array with interpolation search
* @list: list to be saerched
* @size: size if the array
* @value: value to be searched
* Return: interger
*/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	if (!list)
		return (NULL);

	size_t jump = sqrt(size);
	listint_t *prev = NULL;
	listint_t *current = list;

	while (current && current->n < value)
	{
		prev = current;
		for (size_t i = 0; i < jump && current->next; ++i)
			current = current->next;

		printf("Value checked at index [%lu] = [%d]\n", current->n, current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev->n, current->n);

	while (prev && prev->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->n, prev->n);
		prev = prev->next;
	}

	if (prev && prev->n == value)
		return (prev);

	return (NULL);
}
