#include "main.h"
#include <string.h>

/**
* puts_half - prints half the string
* @str: string
* Return: None
*/

void puts_half(char *str)
{
	int i;
	int len;
	int n;
	int hl;
	
	len = strlen(str);
	hl = len / 2;
	for (i = hl; i < len; i++)
	{
		if (len % 2 != 0)
		{
			n = ((len - 1) / 2);
			_putchar(*(str + i));
			_putchar(n);
			break;
		}
		else
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
		
