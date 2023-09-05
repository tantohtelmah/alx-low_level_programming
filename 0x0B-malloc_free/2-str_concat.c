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
	int len1 = 0, len2 = 0;
	char *result = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	result = malloc(len1 + len2 + 1);
	if (result == NULL)
		return (NULL);
	memcpy(result, s1, len1);
	memcpy(result + len1, s2, len2 + 1);
	return (result);
}
