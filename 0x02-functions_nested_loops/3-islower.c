#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include "main.h"
#include "_putchar.h"

/**
* print_alphabet_x10 - Prints the alphabet in lowercase.ten times
* Return: Always Zero
*/

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
		return (0);
}
