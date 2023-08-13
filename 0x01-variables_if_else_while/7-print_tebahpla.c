#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints the letters of the alphabet in lowercase without 'q' and 'e'
* Return: Always Zero
*/
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c++)
	{
		printf("%c", c);
	}
	printf("\n");
	return (0);
}
