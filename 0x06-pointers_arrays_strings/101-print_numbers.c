#include "main.h"

/**
* print_number - prints integers
* @n: integer
* Return: none
*/

void print_number(int n)
{
	int a, b, c, d, e, f;
	if (n > 0)
	{
    		if (n < 9)
    		{
			 _putchar(n + '0');
		}
		if (n > 9 && n <= 99)
		{
			a = n / 10;
			b = n % 10;
			_putchar(a + '0');
			_putchar(b + '0');
		}
		if (n > 99 && n <= 999)
		{
			a = n / 10;
			b = a / 10;
			c = n % 10;
			d = b % 10;
			_putchar(b + '0');
			_putchar(d + '0');
			_putchar(c + '0');
		}
		if (n > 999 && n <= 9999)
		{
        		a = n / 10;
			b = a / 10;
			c = b / 10;
			f = b % 10;
			d = n % 10;
			e = a % 10;
			_putchar(c + '0');
			_putchar(f + '0');
			_putchar(e + '0');
			_putchar(d + '0');
		}
	}
	else
	{
		if (n < 9)
		{
			_putchar('-');
			_putchar(n + '0');
		}
		if (n > 9 && n <= 99)
		{
			a = n / 10;
			b = n % 10;
			_putchar('-');
			_putchar(a + '0');
			_putchar(b + '0');
		}
		if (n > 99 && n <= 999)
		{
			a = n / 10;
			b = a / 10;
			c = n % 10;
			d = b % 10;
			_putchar('-');
			_putchar(b + '0');
			_putchar(d + '0');
			_putchar(c + '0');
		}
		if (n > 999 && n <= 9999)
		{
			a = n / 10;
			b = a / 10;
			c = b / 10;
			f = b % 10;
			d = n % 10;
			e = a % 10;
			_putchar('-');
			_putchar(c + '0');
			_putchar(f + '0');
			_putchar(e + '0');
			_putchar(d + '0');
		}
	}
}
