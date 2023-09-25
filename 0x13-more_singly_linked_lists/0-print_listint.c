#include "lists.h"

/**
 * print_listint - prints the elements of a  node
 * @h: listint
 * Return: size_t
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
