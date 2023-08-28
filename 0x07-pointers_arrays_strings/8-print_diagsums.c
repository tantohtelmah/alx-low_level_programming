#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of an array's diagonals
* @a: integer
* @size: integer
*/

void print_diagsums(int *a, int size)
{
	int sumf = 0;
	int sumb = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sumf += *(a + i * size + i);
		sumb += *(a + i * size + (size - i - 1));
	}
	printf("%d, %d\n", sumf, sumb);
}
