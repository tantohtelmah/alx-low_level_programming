#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"
#include "_putchar.h"

/**
* _abs - Prints the last digit value of numbers
* Return: Always Zero
*/

int print_last_digit(int n)
{
	int v;
	int b;
	int a;

	v = abs(n);
	b = v % 10;
	a = b + 48;
	_putchar(a);
	return (0);
}
