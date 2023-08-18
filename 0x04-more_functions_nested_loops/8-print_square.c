#include "main.h"
#include <ctype.h>
#include <unistd.h>
#include "_putchar.h"

/**
* print_square - prints a line
* @size: integer
* Return: none
*/

void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		_putchar('\n');
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		if (size == 0 || size < 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
