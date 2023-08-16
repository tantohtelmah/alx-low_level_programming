#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"
#include "_putchar.h"

/**
* _abs - Prints the sum of two numbers
* Return: Always Zero
*/

int add(int a, int b)
{
	int sum;
	int s[2];
	int c;
	int d;

	sum = a + b;
	s[0] = sum / 10;
	c = s[0] + 48;
	s[1] = sum % 10;
	d = s[1] + 48;	
	putchar(c);
	putchar(d);
	return (0);
}
