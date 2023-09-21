#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints a lists
 * @h: list_t
 * Return: size_t
*/

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	int count = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[%d] ", 0);
			printf("%s\n", "(nil)");
		}
		else
		{
			printf("[%d] ", current->len);
			printf("%s\n", current->str);
		}
		current = current->next;
	}
	count += 2;
	return (count);
}
