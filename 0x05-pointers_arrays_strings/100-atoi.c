#include "main.h"
#include <string.h>

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
			_putchar(j);
		}
	}
	_putchar('\n');
	return (j);
}
