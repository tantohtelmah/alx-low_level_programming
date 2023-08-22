#include "main.h"
#include <stdlib.h>

/**
* _atoi - string to numbers
* @s: character
* Return: integer
*/

int _atoi(char *s)
{
	char *endptr;
	long int result = strtol(s, &endptr, 10);

	result = strtol(s, &endptr, 10);
	if (s == endptr)
	{
		return (0);
	}
	if (result > 65536)
	{
		return (65536);
	}
	if (result < -65536)
	}
		return (-65536);
	}
		return ((int) result);
}
