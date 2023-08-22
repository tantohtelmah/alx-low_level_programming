#include "main.h"
#include "_putchar.h"
#include <stdio.h>
/**
* print_array - prints the elements of an array
* @a: integer
* @n: integer
* Return: None
*/

void print_array(int *a, int n)
{
	int i;
;
	for (i = 0; i < n + 1; i++)
	{
		putchar(*(a + i));
		putchar(',');
		putchar(' ');
		putchar('\b');
		putchar('\b');
	}
	putchar('\n');
}
