#include "main.h"
#include <string.h>

/**
* _sqrt_recursion - prints a recursion
* @n: integer
* Return: integer
*/

int _sqrt_recursion(int n)
{
	int last = 0;
	int result = 1;

	if (n == 0)
	{
		return (0);
	}
	if (result != last)
	{
		last = result;
		result = (result + (n / result)) / 2;
	}
	if (result != last)
	{
		_sqrt_recursion(n);
	}
	if (n % 2 != 0)
	{
		result = -1;
	}
	return (result);
}
