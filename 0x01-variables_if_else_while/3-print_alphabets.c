#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints the letters of the alphabet in lowercase and uppercase.
* Return: Always Zero
*/
int main(void)
{
	char c;
	char a;

	for (c = 'a'; c <= 'z'; c++)
	{
		printf("%c", c);
	}
	for (a = 'A'; a <= 'Z'; a++)
	{
		printf("%c", a);
	}
	printf("\n");

	return (0);
}
