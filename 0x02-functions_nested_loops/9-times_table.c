#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"
#include "_putchar.h"

/**
* _abs - Prints the last digit value of numbers
* Return: Always Zero
*/

void times_table(void)
{
	int j;
	int i;
	int a;

	for (i = 0; i > 0; i++)
	{
		for (j = 0; j > 0; j++)
		{
			a = i*j;
			_putchar(a + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
