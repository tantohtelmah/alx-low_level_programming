#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"
#include "_putchar.h"

/**
* _abs - Prints the absolute value of numbers
* Return: Always Zero
*/

int _abs(int n)
{
	int v;
	v = abs(n);
	_putchar(v + '0');
	return (0);
}
