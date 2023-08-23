#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* _atoi - string to numbers
* @s: character
* Return: integer
*/

int _atoi(char *s)
{
	int i;
	int j;
	
	for (i = 0; i < (int)strlen(s); i++)
	{
		for (j = 0; j < 256; j++)
		{
			if (j == (*(s + i)))
			{
				putchar(j);
			}
		}
	}
	putchar('\n');
	return (j);
}
