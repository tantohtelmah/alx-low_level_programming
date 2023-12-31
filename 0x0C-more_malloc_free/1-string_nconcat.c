#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - creates an array of characters
 * @s1: char
 * @s2: char
 * @n: unsigned int
 * Return: none
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	str = malloc(sizeof(char) * (i + n + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; s2[j] != '\0' && j < n; j++)
		str[i + j] = s2[j];
	str[i + j] = '\0';

	return (str);
}
