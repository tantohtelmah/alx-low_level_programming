#include "main.h"
#include <string.h>

/**
* _strlen_recursion - prints a recursion
* @s: character
* Return: integer
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*(s + i) == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion((s + i + 1)));
}
