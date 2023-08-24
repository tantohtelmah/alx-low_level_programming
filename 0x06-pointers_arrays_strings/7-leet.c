#include "main.h"
#include <string.h>

/**
* leet - encodes
* @s: character
* Return: character
*/

char *leet(char *s)
{
	char *arr1 = "aeotl";
	char *arr2 = "AEOTL";
	char *arr3 = "43071";
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		j = 0;
		while (j < (int)strlen(arr1))
		{
			if (*(s + i) == *(arr1 + j) || *(s + i) == *(arr2 + j))
			{
				*(s + i) = *(arr3 + j);
			}
			j++;
		}
		i++;
	}
	return (s);
}
