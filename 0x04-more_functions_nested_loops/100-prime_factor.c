#include <stdio.h>
#include <math.h>

/**
* main - Prime numbers
* @void: no value
* Return: always zero
*/

int main(void)
{
	float n = 612852475143;
	float i;

	for (i = 2; i <= n; i++)
	{
		while (fmod(n, i) == 0.0)
		{
			printf("%f ", i);
			n /= i;
		}
	}
	if (n > 1)
	{
		printf("%f", n);
	}
	return (0);
}
