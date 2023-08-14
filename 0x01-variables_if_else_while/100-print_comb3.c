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

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i == j)
			{
				continue;
			}
			if (i > j)
			{
				continue;
			}
			putchar(i);
			putchar(j);
			if (i != 56 && j != 5)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
