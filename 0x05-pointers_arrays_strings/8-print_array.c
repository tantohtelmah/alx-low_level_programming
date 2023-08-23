#include "main.h"
#include <stdio.h>
/**
* print_array - prints the elements of an array
* @a: integer
* @n: integer
* Return: None
*/

void print_array(int *a, int n)
{
	int i;
;
	for (i = 0; i < n; i++)
	{
		printf("%d, ", *(a + i));
	}
	printf("\b\b");
	printf(" \n");
}
