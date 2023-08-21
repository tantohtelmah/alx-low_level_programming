#include "main.h"
#include <string.h>

/**
* puts2 - Prints every even number in a string
* @str: string
* Return: none
*/

void puts2(char *str)
{
	int i;
	int len;

	len = strlen(str);
	for (i = 0; i < len; i = i + 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
