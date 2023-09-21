#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - prints a lists
 * @head: list_t
 * @str: char
 * Return: size_t
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *end_node;

	new_node = malloc(sizeof(list_t));
	end_node = *head;
	if (!new_node || !head)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	while (end_node->next)
		end_node = end_node->next;

	end_node->next = new_node;

	return (new_node);
}
