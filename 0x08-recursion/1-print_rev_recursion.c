#include "main.h"
#include <string.h>

/**
* _print_rev_recursion - prints a recursion
* @s: character
* Return: none
*/

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (*(s + i) == '\0')
	{
		return;
	}
	_print_rev_recursion((s + i + 1));
	_putchar(*(s + i));
}
