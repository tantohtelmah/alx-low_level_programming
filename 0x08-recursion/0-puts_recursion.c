#include "main.h"

/**
* _puts_recursion - prints a recursion
* @s: character
* Return: none
*/

void _puts_recursion(char *s)
{
	int i = 0;

	if (*(s + i) == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s + i));
	_puts_recursion((s + i + 1));
}
