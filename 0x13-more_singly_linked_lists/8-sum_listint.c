#include "lists.h"

/**
 * sum_listint - Adds all elements of the node
 * @head: Pointer to the head of the list.
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	unsigned int i = 0;
	int data_sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		data_sum += head->n;
		head = head->next;
		i++;
	}
	return (data_sum);
}
