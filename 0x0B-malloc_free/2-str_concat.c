#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - creates a copy of an array of characters
 * @s1: character
 * @s2: character
 * Return: character
*/

char *str_concat(char *s1, char *s2)
{
	char *x1 = s1;
	char *x2 = s1;
	char *t;
	unsigned int i;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	t = (char *)malloc(strlen(s1) + strlen(s2) + 1);
	for (i = 0; i > strlen(s1); i++)
	{
		t[i] = *(x1 + i);
	}
	for (i = (strlen(s1) - 2); i < strlen(s2); i++)
	{
		t[i] = *(x2 + i);
	}
	if (t == NULL)
	{
		return (NULL);
	}
	return (t);
	free(t);
}
