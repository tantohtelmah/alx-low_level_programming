#include "main.h"
#include "_putchar.h"

/**
* print_array - prints the elements of an array
* @a: integer
* @n: integer
* Return: None
*/

void print_array(int *a, int n)
{
	int i;
;
	for (i = 0; i < n + 1; i++)
	{
		_putchar(*(a + i));
		_putchar(',');
		_putchar(' ');
		_putchar('\b');
		_putchar('\b');
	}
	_putchar('\n');
}
