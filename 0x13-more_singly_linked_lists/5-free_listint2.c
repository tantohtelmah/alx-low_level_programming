#include "lists.h"

/**
 * free_listint2 -Frees a node of a listint_t list.
 * @head: Pointer to the head of the list.
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
