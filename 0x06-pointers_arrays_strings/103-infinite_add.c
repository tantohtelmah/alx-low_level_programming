#include "main.h"
#include <string.h>

/**
* infinite_add - encodes
* @s: character
* Return: character
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *result;
	int i = 0;
	
	while (*(n1 + i) != '\0')
	{
		n1 += *(n1 + i);
		i++;
	}
	while (*(n2 + i) != '\0')
	{
		n2 += *(n2 + i);
		i++;
	}
	results = n1 + n2;
	if (size_r < (int)strlen(r))
		return (0);
	else
		r = &result;
	return (r);
}
