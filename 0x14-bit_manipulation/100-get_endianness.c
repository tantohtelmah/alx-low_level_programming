#include "main.h"

/**
 * get_endianness - finds the endianness
 * Return: interger
*/

int get_endianness(void)
{
	int *int_ptr;
	char *char_ptr;
	char test = 'T';

	char_ptr = &test;
	int_ptr = (int *)char_ptr;
	if (int_ptr == 0)
		return (0);
	else
		return (1);
}
