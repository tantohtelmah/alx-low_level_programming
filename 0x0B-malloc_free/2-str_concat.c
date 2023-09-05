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

	t = malloc(strlen(s1) + strlen(s2) + 1);
	if (t != NULL)
	{
		while (*x1 != '\0')
		{
			*t = *x1;
			x1++;
			t++;
		}
		while (*x2 != '\0')
		{
			*t = *x2;
			x2++;
			t++;
		}
	}
	return (t);
}
