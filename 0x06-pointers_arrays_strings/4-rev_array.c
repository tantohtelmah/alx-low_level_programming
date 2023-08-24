#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* reverse_array - compares strings
* @a: integer
* @n: integer
* Return: none
*/

void reverse_array(int *a, int n)
{
	int i;


	for (i = n; i > 0; i--)
	{
		if (i != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		printf("%d", *(a + i));
	}
	_putchar('\n');
}
