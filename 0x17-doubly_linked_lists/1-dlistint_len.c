#include "lists.h"
/**
 * dlistint_len - number of the elements of a linked list
 * @h: dlistint_t
 * Return: size_t
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
		count++;
	return (count);
}
