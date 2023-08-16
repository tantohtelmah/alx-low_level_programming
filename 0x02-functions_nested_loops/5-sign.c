#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include "main.h"
#include "_putchar.h"

/**
* print_sign - Prints 
* Return: Always Zero
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
