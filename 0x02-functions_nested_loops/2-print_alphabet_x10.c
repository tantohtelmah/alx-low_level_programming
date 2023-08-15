#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include "_putchar.h"

/**
* print_alphabet_x10 - Prints the alphabet in lowercase.ten times
* Return: Always Zero
*/

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
