#include "lists.h"

/**
 * get_nodeint_at_index - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to the head of the list.
 * @index: unsigned int
 * Return: pointer to head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
