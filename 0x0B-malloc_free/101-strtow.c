#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * is_space - creates a copy of a two dimensional array of characters
 * @c: char
 * Return: none
*/

int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - creates a copy of a two dimensional array of characters
 * @str: char
 * Return: none
*/

int count_words(char *str)
{
	int count = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!is_space(str[i]) && (i == 0 || is_space(str[i - 1])))
			count++;
	}

	return (count);
}

/**
 * strtow - creates a copy of a two dimensional array of characters
 * @str: char
 * Return: char
*/

char **strtow(char *str)
{
	char **words;
	int word_count;
	int i, j, k;

	if (str == NULL || *str == '\0' || str == "\t\0")
		return (NULL);

	word_count = count_words(str);
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; i < word_count; i++)
	{
		while (is_space(str[k]))
			k++;

		j = k;
		while (!is_space(str[j]) && str[j] != '\0')
			j++;
		words[i] = malloc((j - k + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(words[i]);
			free(words);
			return (NULL);
		}
		strncpy(words[i], &str[k], j - k);
		words[i][j - k] = '\0';
		k = j;
	}
	words[word_count] = NULL;
	return (words);
}
