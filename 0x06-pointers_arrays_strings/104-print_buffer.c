#include <stdio.h>
#include <ctype.h>

/**
* print_buffer - prints buffer
* @b: character
* @size: int
* return: none
*/

void print_buffer(char *b, int size)
{
	int i;
	int j;
	char c;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%02x ", b[i + j]);
			}
			else
			{
				printf("   ");
			}
		}
		printf(" ");
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				c = isprint(b[i + j]) ? b[i + j] : '.';
				printf("%c", c);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

