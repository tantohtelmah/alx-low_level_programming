#include <stdio.h>
#include <unistd.h>
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
	int a;

	v = abs(n % 10);
	a = v + 48;
	_putchar(a);
	return (0);
}
