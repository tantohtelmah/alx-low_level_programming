#include "_putchar.h"
#include <stdio.h>
#include <string.h>

/**
* print_rev - prints out the string in reverse
* @str: characters
* Return: None
*/

void print_rev(char *str)
{
	int len;
	int i;

	len = strlen(str);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(str + i));
	}
}
