#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
* main - prints random numbers and check if it is positive
* @n: integer
* Return: Always Zero
*/
void positive_or_negative(int n)
{

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
		printf("%d is negative\n", n);
}
