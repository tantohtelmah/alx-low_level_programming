#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints the single digit numbers combination.
* Return: Always Zero
*/
int main(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
