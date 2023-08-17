#include "main.h"
#include <ctype.h>
#include <unistd.h>
#include "_putchar.h"

/**
* print_most_numbers - Chesks for digits
* Return: none
*/

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50)
		{
			continue;
		}
		if (i == 52)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
