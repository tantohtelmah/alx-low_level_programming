#include "main.h"
#include <ctype.h>
#include <unistd.h>
#include "_putchar.h"

/**
* print_square - prints a line
* @size: integer
* Return: none
*/

void print_triangle(int size) 
{
	int i;
	int j;

	for (i = 1; i <= size; i++) 
	{
		_putchar(' ');
		for (j = 1; j <= i; j++) 
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
