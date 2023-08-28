#include "main.h"
#include <stddef.h>

/**
* _strchr - returns first occurance of c in string
* @s: character
* @c: character
* Return: Character
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return ((s + i));
		}
		i++;
	}
	return (NULL);
}
