#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include "_putchar.h"

/**
* print_alphabet - Prints the alphabet in lowercase.
* Return: Always Zero
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
