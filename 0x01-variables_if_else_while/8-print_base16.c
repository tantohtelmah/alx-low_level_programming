#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints the single digit numbers of base 16.
* Return: Always Zero
*/
int main(void)
{
	int c;
	int a;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
	}
	for (a = 97; a < 102; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
