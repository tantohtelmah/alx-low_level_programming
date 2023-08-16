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

void jack_bauer(void)
{
	int i;
	int j;
	int x;
	int y;

	for (i = 48; i < 51; i++)
	{
		for (j = 48; j < 52; j++)
		{
			for (x = 48; x < 54; x++)
			{
				for (y = 48; y < 58; y++)
				{
             				putchar(i);
					putchar(j);
					putchar(':');
					putchar(x);
					putchar(y);
					putchar('\n');
				}
			}
		}
	}
}
