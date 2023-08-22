#include "main.h"
#include <stdlib.h>

int _atoi(char *s) 
{
	char *endptr;
	long int result = strtol(s, &endptr, 10);

	result = strtol(s, &endptr, 10);
	if (s == endptr) 
	{
		return 0;
	}
	if (result > 2147483647) 
	{
		return 2147483647;
	}
	if (result < -2147483648) 
	{
		return -2147483648;
	}
	return (int) result;
}
