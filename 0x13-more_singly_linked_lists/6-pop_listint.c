#include "lists.h"

/**
 * pop_listint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to the head of the list.
 * Return: the new element, or 0
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);

	return (data);
}
