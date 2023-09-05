#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - creates a copy of a two dimensional array of characters
 * @ac: int
 * @av: char
 * Return: none
*/

char *argstostr(int ac, char **av)
{
	int i, j;
	int len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;

	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[len] = av[i][j];
			len++;
		}
		str[len] = '\n';
		len++;
	}
	str[len] = '\0';
	return (str);
}
