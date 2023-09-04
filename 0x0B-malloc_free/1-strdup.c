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

	t = malloc(len);
	for (i = 0; i < len; i++)
	{
		t[i] = *(s + i);
	}
	if (len == 0)
	{
		return (NULL);
	}
	if (t == NULL)
	{
		return (NULL);
	}
	return (t);
	free(t);
}
