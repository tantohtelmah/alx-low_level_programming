#include "main.h"
#include <ctype.h>
#include <unistd.h>
#include "_putchar.h"

/**
* print_numbers - Chesks for digits
* Return: none
*/

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
