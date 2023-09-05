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

	if (!str)
		return (NULL);
	t = malloc(strlen(str) + 1);
	if (t != NULL)
	{
		for (i = 0; i < strlen(str); i++)
			t[i] = *(s + i);
		t[i] = '\0';
	}
	return (t);
}
