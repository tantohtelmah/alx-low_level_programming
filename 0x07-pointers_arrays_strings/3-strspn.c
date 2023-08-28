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
	int check;

	while (*(s + i) != '\0')
	{
		check = 0;
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				check = 1;
				break;
			}
			j++;
		}
		if (!check)
			break;
		i++;
	}
	return (i);
}
