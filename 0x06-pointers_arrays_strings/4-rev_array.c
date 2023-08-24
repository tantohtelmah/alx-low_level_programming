#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* reverse_array - compares strings
* @a: integer
* @n: integer
* Return: none
*/

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = *(a + i);
		*(a + i) = *(a + (n - i - 1));
		*(a + (n - i - 1)) = tmp;
	}
}
