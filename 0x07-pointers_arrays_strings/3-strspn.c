#include "main.h"

/**
* _strspn - returns the lenght of the prefix substring
* @s: character
* @accept: character
* Return: Character
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (*(s + i) != '\0')
	{
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
				break;
			j++;
		}
		if (*(accept + j) == '\0')
			return (j + 1);
		i++;
	}
	return (j + 1);
}
