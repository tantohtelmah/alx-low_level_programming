#include <stdio.h>
#include <unistd.h>
#include "_putchar.h"

/**
* main - Uses '_putchar' to display output.
* Return: Always Zero
*/

int main(void)
{
	char ch[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
