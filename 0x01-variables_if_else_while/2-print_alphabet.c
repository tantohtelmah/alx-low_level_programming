#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
*
* main - prints the letters of the alphabet in lowercase.
* Results: Always Zero
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		printf("%c", c);
	}

	return (0);
}
