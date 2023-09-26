#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes element at index
 * @head: Pointer to the head of the list.
 * @index: unsigned int
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	prev = *head;
	for (i = 0; i < index - 1 && prev != NULL; i++)
		prev = prev->next;
	if (prev == NULL || prev->next == NULL)
		return (-1);
	temp = prev->next;
	prev->next = temp->next;
	free(temp);
	return (1);
}
