#include "main.h"
#include <string.h>
#include <stddef.h>

/**
* _strstr - returns first occurance of c in string
* @haystack: character
* @needle: character
* Return: Character
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	char *start;

	while (*(haystack + i) != '\0')
	{
		while (*(needle + j) != '\0')
		{
			if (*(haystack + i) == *(needle + j))
			{
				start = haystack;
				while ((*(haystack + i) == *(needle + j)) && *(needle + j) != '\0')
				{
					return ((haystack + i));
				}
				if (*(needle + j) == '\0')
				{
					return ((start + i));
				}
			}
			j++;
			
		}
		i++;
	}
	return (NULL);
}
