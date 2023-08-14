#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints the single digit numbers combination with conditions.
* Return: Always Zero
*/
int main(void)
{
	int i;
	int j;
	int x;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (x = 48; x < 58; x++)
			{
				if (i == j || i == x || j == x)
				{
					continue;
				}
				if (i > j || j > x || i > x)
				{
					continue;
				}
				putchar(i);
				putchar(j);
				putchar(x);
				if (i != 55 || j != 56 || x != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
