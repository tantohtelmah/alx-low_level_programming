#include "main.h"
#include <string.h>
#include "_putchar.h"
#include <stdio.h>


/**
* print_rev - prints out the string in reverse
* @str: characters
* Return: None
*/

void rev_string(char *str)
{
	int len;
	int i;

	len = strlen(str);
	for (i = len - 1; i >= 0; i--)
	{
		putchar(*(str + i));
	}
	putchar('\n');
}
