#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints the double digit numbers combination with conditions.
* Return: Always Zero
*/
int main(void)
{
	int i;
	int j;
	int x;
	int y;
	int rw;
	int lw;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (x = 48; x < 58; x++)
			{
				for (y = 48; y < 58; y++)
				{
					rw = (x - 48) * 10 + (y - 48);
					lw = (i - 48) * 10 + (j - 48);
					if ((i == j && j == x && x == y) || (i == x && j == y) || (rw < lw))
					{
						continue;
					}
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(x);
					putchar(y);
					if (i != 57 || j != 56 || x != 57 || y != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
