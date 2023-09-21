#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - prints a lists
 * @head: list_t
 * @str: char
 * Return: size_t
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;

	current = *head;
	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = current;
	current = new_node;
	printf("i am here");
	return (new_node);
}
