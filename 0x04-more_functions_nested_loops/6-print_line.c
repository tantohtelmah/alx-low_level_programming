#include "main.h"
#include <ctype.h>
#include <unistd.h>
#include "_putchar.h"

/**
* print_line - prints a line
* @n: integer
* Return: none
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
		if (n < 0)
		{
			_putchar('\n');
			continue;
		}
	}
	_putchar('\n');
}
