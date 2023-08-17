#include "main.h"
#include <ctype.h>
#include <unistd.h>
#include "_putchar.h"

/**
* print_most_numbers - Chesks for digits
* Return: none
*/

void more_numbers(void)
{
	int i;
	int j;
	int x;

	for (x = 48; x < 58; x++)
	{ 
		for (i = 48; i < 58; i++)
		{
			_putchar(i);
		}
		for (j = 48; j < 53; j++)
		{
			_putchar(49);
			_putchar(j);
		}
		_putchar('\n');
	}
}
