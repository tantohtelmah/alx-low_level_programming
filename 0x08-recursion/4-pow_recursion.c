#include "main.h"
#include <string.h>

/**
* _pow_recursion - power of a number
* @x: integer
* @y: integer
* Return: integer
*/

int _pow_recursion(int x, int y)
{

	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
