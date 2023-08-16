#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include "main.h"
#include "_putchar.h"

/**
* print_alphabet_x10 - Prints the alphabet in lowercase.ten times
* Return: Always Zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
