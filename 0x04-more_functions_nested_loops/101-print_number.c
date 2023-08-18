#include "main.h"
#include <ctype.h>
#include <unistd.h>
#include "_putchar.h"

/**
* print_square - prints a line
* @size: integer
* Return: none
*/

void print_number(int n) 
{
	int c;
	int d;
	int a;
	int b;
	int f;

	if (n <= 9 || n > -9)
	{
		_putchar(n + '0');
	}
	else if (n > 9 || n > -9 )
	{
		c = n / 10;
		d = n % 10;
		_putchar(c + '0');
	}
	else if (n > 99 || n > -99)
	{
		a = n / 10;
		b = a / 10;
		c = a % 10;
		f = n % 10;
		_putchar(a);
		_putchar(c);
		_putchar(f);
	}	
	_putchar(b);
	_putchar(d);	
	_putchar('\n');
}
