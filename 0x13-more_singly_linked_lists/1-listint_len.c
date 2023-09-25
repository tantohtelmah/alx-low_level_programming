#include "lists.h"

/**
 * listint_len - prints the elements of a  node
 * @h: listint
 * Return: size_t
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
