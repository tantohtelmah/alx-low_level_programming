#include "main.h"
#include <string.h>

/**
* _sqrt_recursion - prints a recursion
* @n: integer
* Return: integer
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n % n != 0)
	{
		return (-1);
	}
	return (n + _sqrt_recursion(n - 1));
}
