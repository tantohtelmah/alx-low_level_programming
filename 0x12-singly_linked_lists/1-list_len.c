#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - prints a lists
 * @h: list_t
 * Return: size_t
*/

size_t list_len(const list_t *h)
{
	const list_t *current = h;
	int count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
