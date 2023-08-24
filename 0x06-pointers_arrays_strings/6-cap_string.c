#include "main.h"

int is_separator(char);
/**
* cap_string - converts lowercase letters to uppercase
* @s: charater
* Return: character
*/
char *cap_string(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (i == 0 || is_separator(*(s + (i - 1))))
		{
			if (*(s + i) >= 'a' && *(s + i) <= 'z')
				*(s + i) = *(s + i) - 'a' + 'A';
		}
		i++;
	}
	return (s);
}

/**
* is_separator - separators
* @c: character
* Return: character
*/
int is_separator(char c)
{
	char *seps_list = ",;.!?\"(){} \t\n";
	int j = 0;

	while (*(seps_list + j) != '\0')
	{
		if (c == *(seps_list + j))
			return (1);
		j++;
	}
	return (0);
}
