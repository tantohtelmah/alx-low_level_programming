#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include "main.h"
#include "_putchar.h"

/**
* print_sign - Prints '+', '0', '-'
* @n: integer
* Return: Zero, one and negative one
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
