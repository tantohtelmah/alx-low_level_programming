#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - creates a copy of an array of characters
 * @str: charcter
 * Return: character
*/

char *_strdup(char *str)
{
	char *s = str;
	char *t;
	unsigned int i;
	unsigned int len = strlen(str) + 1;

	if (str == NULL)
	{
		return (NULL);
	}
	t = malloc(len);
	for (i = 0; i < strlen(str); i++)
	{
		t[i] = *(s + i);
	}
	if (t == NULL)
	{
		return (NULL);
		exit(EXIT_SUCCESS);
	}
	return (t);
	free(t);
}
