#include "lists.h"

/**
 * free_listint -Frees a node of a listint_t list.
 * @head: Pointer to the head of the list.
 * Return: Address of the new element, or NULL if it failed.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		*head = *head->next;
		head = NULL;
		free(temp);
	}
}
